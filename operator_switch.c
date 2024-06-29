#include <stdio.h>

int main() {
  // -------------------Menu------------------------------------
  // int currentMenu = 0;
  //
  // printf("[1]C++\n[2]C\n[3]Python\n[4]Java\n[5]Exit\nSelect menu: ");
  // if (scanf("%d", &currentMenu) != 1) {
  //   printf("Error!Enter valid number!\n");
  //   return 1;
  // } else {
  //   switch (currentMenu) {
  //   case 1:
  //     printf("Selected C++!\n");
  //     return 0; // NOTE:  Use return 0 instead break if program finishes
  //     after
  //               // switch
  //   case 2:
  //     printf("Selected C!\n");
  //     return 0;
  //   case 3:
  //     printf("Selected Python!\n");
  //     return 0;
  //   case 4:
  //     printf("Selected Java!\n");
  //     return 0;
  // case 5:
  //   printf("Exit!\n");
  //   return 0;
  // default:
  //   printf("Error! Enter valid number!\n");
  //   return 0;
  //   }
  // }

  //-----------------------------Switch with chars-----------------------

  char inputChar;

  printf("Enter a symbol!\n");
  scanf("%c", &inputChar);

  switch (inputChar) {
  case 'a':
  case 'A':
    printf("Find letter %d\n", inputChar);
    return 0;
  default:
    printf("Error, input symbol!\n");
  }
  return 0;
}
