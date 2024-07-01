#include <math.h>
#include <stdio.h>

int main() {
  //---------------------Which is bigger-------------------
  double num1, num2, max, min;
  num1 = 5.3;
  num2 = 3.5;

  printf("Num1 = %.2f \nNum2 = %.2f\n", num1, num2);

  // if (num1 > num2)
  //   printf("num1 bigger than num2!\n");
  // else
  //   printf("Num2 bigger than num1!\n");

  //
  //---------------------Ternary operator Solution-------------------
  //
  max = (num1 > num2) ? num1 : num2; // Brackets for better readability
  min = (num1 < num2) ? num1 : num2; // Brackets for better readability

  printf("The number %.2f  is %.2f more\n", max, max - min);

  //
  //---------------------Ternary operator Solution = return module of num--
  //

  double module = (num1 == num2) ? fabs(num1) : fabs(num2);

  printf("Module  = %.2f\n", module);

  //-----------------Ternary operator in arg-------------------------

  int digit = 5;

  printf("The digit %d is %s\n", digit, (digit % 2 == 0) ? "even" : "odd");

  //-----------------Ternary operator in Ternary operator-------------

  int a = 12, b = 4, c = -2;

  int maxNumber = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
  printf("Max num of all %d %d %d is %d\n", a, b, c, maxNumber);
  return 0;
}
