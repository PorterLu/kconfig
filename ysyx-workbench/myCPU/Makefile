.PHONY: run clean

DST = ./obj_dir
TARGET = VmyCPU
SRCS = $(abspath $(shell find ./vsrc -name "*.v"))
SRCS += $(abspath $(shell find ./csrc -name "*.cpp"))
SRCS += $(abspath $(shell find ./csrc -name "*.c"))
SRCS += $(abspath $(shell find ./csrc -name "*.cc"))
VERILATOR = verilator
PWD := $(shell pwd)
INC_PATH = $(PWD)/include
FLAGS = --cc --build --exe --trace -Wno-lint -Mdir obj_dir --top-module myCPU
HEAD_PATH = -CFLAGS -I$(INC_PATH)
LOG_FILE = log.txt 
IMG_FILE = 
IMG_BIN =
SO_FILE = $(NEMU)/HOME/libriscv64-nemu-intepreter.so
SO_PATH = -LDFLAGS -L$(NEMU_HOME)/build -LDFLAGS -L.
LREADLINE = -LDFLAGS -lreadline
CXXFLAGS = $(addprefix -CFLAGS ,$(shell llvm-config-11 --cxxflags) -fPIE)
#CXXFLAGS += -CFLAGS -g -CFLAGS -o3 
#CXXFLAGS := $(addprefix -CFLAGS , $(CXXFLAGS))
#CXXFLAGS = -CFLAGS -I/usr/lib/llvm-11/include
#CXXFLAGS += -CFLAGS -std=c++14
#CXXFLAGS += -CFLAGS -fno-exceptions
#CXXFLAGS += -CFLAGS -D_GNU_SOURCE
#CXXFLAGS += -CFLAGS -D__STDC_CONSTANT_MACROS
#CXXFLAGS += -CFLAGS -D__STDC_FORMAT_MACROS
#CXXFLAGS += -CFLAGS -D__STDC_LIMIT_MACROS
#CXXFLAGS += -CFLAGS -fPIE
LIBS = -LDFLAGS $(shell llvm-config-11 --libs) -LDFLAGS -lSDL2
SO_LIBS = -LDFLAGS -ldl
#-LDFLAGS -lriscv64-nemu-interpreter
run : $(TARGET)
#	g++ -g -O3 /home/porterlu/ysyx-workbench/myCPU/csrc/disasm.cc `llvm-config-11 --cxxflags` `llvm-config-11 --libs` -o disasm.o
	$(DST)/$(TARGET) -l $(LOG_FILE) -e $(IMG_FILE) -s $(SO_FILE) $(IMG_BIN)

$(TARGET) : $(SRCS)
#g++ $(LIBS) $(CXXFLAGS) $(CXXSRCS) -o obj_dir/disasm.o
	$(VERILATOR) $(CXXFLAGS) $(LIBS) $(FLAGS) $(HEAD_PATH) $(LREADLINE) $(SO_LIBS) $(SRCS)
clean:
	rm $(DST) -rf
