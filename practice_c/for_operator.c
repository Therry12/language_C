#include <stdio.h>

int main() {
  unsigned long long inputNum, sum;

  if (scanf("%llu", &inputNum) != 1) {
    printf("Error! Enter valid number!\n");
    return 1;
  }
  //
  // for (sum = 0; inputNum > 0; --inputNum) {
  //   sum += inputNum * inputNum;
  // }

  // FACTORIAL

  for (sum = 1; inputNum != 0; --inputNum) {
    sum *= inputNum;
  }

  printf("Sum = %llu\n", sum);
}
