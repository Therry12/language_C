#include <stdio.h>

int main() {
  // unsigned char var_d = 153;
  // unsigned char var_c = ~var_d;
  // Bitwise operations -> logic and & logic ~
  //
  unsigned char flags = 9; // 1 = Bit off 5 = Bit on
  unsigned char mask = 1;

  // if (flags & mask) {
  //   printf("Bit 2 is on\n");
  // } else {
  //   printf("Bit 2 is off\n");
  // }

  // flags = flags & ~mask;

  int x = 40;
  x = x >> 1; // division by degree by 2
  printf("x = %d\n", x);

  flags = flags ^ mask;
  printf("flags = %d, mask = %d, \n", flags, mask);
}
