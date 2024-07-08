#include <stdio.h>

int main() {
  // int d = 12;
  // int *ptd = &d; // @NOTE: use it instead ptd = &d;
  //
  // printf("Pointer = %p; *ptd = %d; d = %d\n", ptd, *ptd, d);
  //
  // *ptd = 100;
  // printf("Pointer = %p; *ptd = %d; d = %d\n", ptd, *ptd, d);
  // return 0;

  // int arg = 777;
  //
  // // Make 2 pointers to var arg;
  // int *p_arg;
  // char *p;
  //
  // p_arg = &arg;      // Taking addres variable arg
  // p = (char *)p_arg; // Cuz p_arg stores addres var arg we can take it
  //
  // printf("p_arg = %d, p = %d\n", *p_arg, *p);
  // return 0
  int *p;
  *p = 10; // BAD: Don't use it bad practice

  int arg = 12;
  int *bp = NULL;

  if (bp != NULL) { // Better: we can use it but its not work every time
    *bp = 25;
  }

  printf("%d\n", *p);
}
