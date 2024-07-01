#include <stdio.h>

int main(int argc, char *argv[]) {
  // int digit;
  // scanf("%d", &digit);
  // char even = digit % 2 == 0;
  // if (even)
  //   printf("Number %d is even\n", digit);
  // else
  //   printf("Number %d not even\n", digit);

  //---------------------Cheking is num in range-----------------------------

  int inputNum, inputMode, inputMinRange, inputMaxRange;
  printf("Input number:\n");
  scanf("%d", &inputNum);

  printf("Enter range, a.k.a min max \n");
  scanf("%d %d", &inputMinRange, &inputMaxRange);

  char isRange = inputNum >= inputMinRange && inputNum <= inputMaxRange;
  char isNotRange = !isRange;  // same thing y < - 2 || y > 5

  printf("Enter mode\n[1]Spot in range\n[0]Spot if isnt in range\n");
  scanf("%d", &inputMode);

  if (inputMode)
    printf("Num %d in range\n", inputNum);
  else
    printf("Num %d isnt in range", inputNum);

  return 0;
}
