#include <stdio.h>

int main() {

  // long long inputNum, sum; // For large numbers
  //
  // printf("Enter number: ");
  // if (scanf("%lld", &inputNum) != 1) {
  //   printf("Error! Enter valid number!\n");
  //   return 1;
  // }
  //
  // int it = 0;
  // sum = 0;
  //
  // while (++it <= sum && it <= 10) {
  //   sum += it * it;
  // }
  //
  // printf("Sum = %lld\n", sum);

  int sum, inputNum;
  sum = 0;
  printf("Calculate sum!\n");
  while (scanf("%d", &inputNum) != 0 && inputNum != 0) {
    sum += inputNum;
  }

  printf("Sum = %d\n", sum);
}
