#include "trap.h"

int f0(int, int);
int f1(int, int);
int f2(int, int);
int f3(int, int);


int (*func[])(int,int) = {f0, f1, f2, f3};
int rec = 0, lvl = 0;

int f0(int n, int l) {
  if (l > lvl) lvl = l;
  rec ++;
  return n <= 0 ? 1 : func[1](n / 2, l + 1);
};

int f1(int n, int l) {
  rec ++;
  return n <= 0 ? 1 : func[2](n - 1, l + 1);
};

int f2(int n, int l) {
  rec ++;
  return n <= 0 ? 1 : func[3](n, l + 1);
};

int f3(int n, int l) {
  rec ++;
  return n <= 0 ? 1 : func[0](n / 2, l + 1);
};


int main() {
  int x = f0(1921, 0);
  check(x >= 0 );   // answer
  check(rec >= 0); // # recursions
  check(lvl >= 0); // max depth
  return 0;
}
