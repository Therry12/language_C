#include <stdio.h>

int main(int argc, char *argv[]) {
  // short res = 10 % 3;
  // // это равноценно
  // short res_2 = 10 - 10 / 3 * 3;
  // printf("res = %d\nres_2 = %d\n", res, res_2);
  int count = 1;
  double var_d = 10.0;
  short p = 2;
  var_d /= 3.0 + p;
  count -= 3 - 5;
  p *= 20 - 5;
  printf("count = %d var_d = %f p = %d\n", count, var_d, p);
  return 0;
}