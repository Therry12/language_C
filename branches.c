#include <stdio.h>

int main() {

  //--------------------Negative nums become
  // posive---------------------------------
  // int inputNum;
  //
  // printf("negative nums become positive !\n");
  // if (scanf("%d", &inputNum) != 1) {
  //   printf("Erorr! Enter valid number!\n");
  //   return 1;
  // }
  //
  // if (inputNum < 0)
  //   inputNum = -inputNum;
  //
  // printf("Number = %d\n", inputNum);

  //
  //--------------------Bigger or less---------------------------------
  //

  // int inputNum;
  // scanf("%d", &inputNum);
  // if (inputNum < 0)
  //   printf("Number %d less than 0\n", inputNum);
  // else if (inputNum > 0)
  //   printf("Number %d bigger than 0\n", inputNum);
  // else if (inputNum == 0)
  //   printf("Number %d equal 0\n", inputNum);
  // else
  //   printf("Error! Enter valid number");

  //
  //---------------------Bit depth of number--------------------------------
  //

  int inputNum;
  printf("Enter number >>> \n");
  scanf("%d", &inputNum);

  if (inputNum == 0)
    printf("Num %d is zero\n", inputNum);
  else if (inputNum < 10)
    printf("Num %d is one-digit number\n", inputNum);
  else if (inputNum >= 10 && inputNum <= 99)
    printf("Num %d is two-digit\n", inputNum);
  else if (inputNum >= 100 && inputNum <= 999)
    printf("Num %d is three-digit\n", inputNum);
  else {
    printf("Error! Enter valid number!\n");
    return 0;
  }

  return 0;
}
