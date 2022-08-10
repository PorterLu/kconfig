import chisel3._
import chisel3.util._
import chisel3.util.HasBlockBoxInline
import chisel3.util.experimental.loadMemoryFromFile
import chisel3.stage.ChiselStage

class ebreak extends BlackBox with HasBlockBoxInline{
    val io = IO(new Bundle{
        val instr = Input(UInt(32.W))
        val out = Output(Bool())
    })

    setInline("ebreak.v",
             """
             | import "DPI-C" function void halt();
             | initial begin 
             |  halt()
             | end
             """.stripMargin)
}

class mem(memoryFile : String = "") extends Module{
    val io = IO(new Bundle{
        val enable = Input(Bool())
        val write_enable = Input(Bool())
        val addr = Input(UInt(64.W))
        val dataIn = Input(UInt(64.W))
        val dataOut = Output(UInt(64.W))
    })

    val mem = SyncReadMem(0x800000, UInt(8.W))
    if(memoryFile.trim().nonEmpty){
        loadMemoryFromFile(mem, memoryFile)
    }

    io.dataOut := DontCare
    when(io.enable)
    {
        when(io.write_enable)
        {
            for(i <- 0 until 8)
            {
                mem(io.addr + i.U) := io.dataIn(7+i*8, i*8)
            }
        }

        io.dataOut := Cat(mem(io.addr), mem(io.addr + 1.U), mem(io.addr + 2.U), 
                        mem(io.addr + 3.U), mem(io.addr + 4.U), mem(io.addr + 5.U),
                        mem(io.addr + 6.U), mem(io.addr + 7.U))
    }
}

class myCPU extends Module{
    val io = IO(new Bundle{
        val addr = Output(UInt(64.W))
        val enable = Output(Bool())
        val write_enable = Output(Bool())
        val data = Input(UInt(64.W))
    })

    val pc = RegInit("h80000000".U(64.W))
    val regFile = Vec(32, RegInit(0.U(64.W)))
    val enable = RegInit(false.B)
    val instr = RegInit(0.U(32.W))
    val src1 = RegInit(0.U(5.W))
    val src2 = RegInit(0.U(5.W))
    val dest = RegInit(0.U(5.W))
    val imm_I = RegInit(0.S(64.W))
    val imm_U = RegInit(0.S(64.W))
    val imm_S = RegInit(0.S(64.W))
    val imm_B = RegInit(0.S(64.W))
    val imm_J = RegInit(0.S(64.W))
    val op = RegInit(0.U(16.W))
    val add :: sub :: load :: store :: shift_ll :: shift_lr :: shift_al :: shift_ar :: mul :: div :: rem :: load_i :: Nil = Enum(12)
//---------------IFU---------------------------

    io.addr := pc
    pc := pc + 4.U
    instr := io.data
//--------------IDU---------------------------- 

    val is_type_R = RegInit(false.B)
    val is_type_I = RegInit(false.B)
    val is_type_S = RegInit(false.B)
    val is_type_B = RegInit(false.B)
    val is_type_U = RegInit(false.B)
    val is_type_J = RegInit(false.B)

    val is_sign_ex = RegInit(false.B)
    val is_unsign_ex = RegInit(false.B)
    val is_src1 = RegInit(false.B)
    val is_src2 = RegInit(false.B)
    val is_dest = RegInit(false.B)
    val is_immI = RegInit(false.B)
    val is_immU = RegInit(false.B)
    val is_immS = RegInit(false.B)
    val is_immJ = RegInit(false.B)
    val is_immB = RegInit(false.B)

    val mask1 = "b1111111 00000 00000 000 00000 00000 00".U
    val mask2 = "b0000000 00000 00000 111 00000 00000 00".U
    val mask3 = "b0000000 00000 00000 000 00000 11111 11".U
    val src1_mask = "b0000000 00000 11111 000 00000 00000 00".U
    val src2_mask = "b0000000 11111 00000 000 00000 00000 00".U
    val dest_mask = "b0000000 00000 00000 000 11111 00000 00".U

    src1 := instr & src1_mask
    src2 := instr & src2_mask
    dest := instr & dest_mask

    imm_I := instr(31,20) 
    imm_S := Cat(instr(11,7),instr(31,20)) 
    imm_B := Cat(0.U(1.W), instr(11,8), instr(30,25), instr(7,7),instr(31,31)) 
    imm_U := instr(31,12)
    imm_J := Cat(0.U(12.W), instr(30,21), instr(20,20), instr(19,12), instr(31,31))

    imm_I := Mux(imm_I(11,11).toBool, Cat(Fill(52, 1.U), imm_I), imm_I)
    imm_S := Mux(imm_S(11,11).toBool, Cat(Fill(52, 1.U), imm_S), imm_S)
    imm_U := Mux(imm_U(19,19).toBool, Cat(Fill(44, 1.U), imm_U), imm_U)
    imm_B := Mux(imm_B(12,12).toBool, Cat(Fill(51, 1.U), imm_B), imm_B)
    imm_J := Mux(imm_J(31,31).toBool, Cat(Fill(32, 1.U), imm_J), imm_J)
    val instr_op = WireDefault(instr & mask3)
    switch(instr_op)
    {
        is("b0010011".U)
        {
            switch (instr & mask2)
            {
                is("b0".U)
                {
                    is_type_I := true.B
                    is_src1 := true.B
                    is_dest := true.B
                    is_immI := true.B
                    op := add
                }
            }
        }
    }

//------------------EX--------------------------------------

    val result = RegInit(0.S(64.W))
    switch(op)
    {
        is(add)
        {
            when(is_type_I)
            {
                result := regFile(src1).asSInt + imm_I
            }
        }
    } 

//----------------WB----------------------------------------

    when(is_dest)
    {
        when(dest =/= 0.U)
        {
            regFile(dest) := result
        }
    }

}

object Driver extends App{
    (new ChiselStage).emitVerilog(new myCPU, args)
}
