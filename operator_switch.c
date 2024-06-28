#include <stdio.h>

int main() {
  int currentMenu = 0;

  printf("[1]C++\n[2]C\n[3]Python\n[4]Java\nSelect menu: ");
  if (scanf("%d", &currentMenu) != 1) {
    printf("Error!Enter valid number!\n");
    return 1;
  } else {
    switch (currentMenu) {
    case 1:
      printf("Selected C++!\n");
      break;
    case 2:
      printf("Selected C!\n");
      break;
    case 3:
      printf("Selected Python!\n");
      break;
    case 4:
      printf("Selected Java!\n");
      break;
    default:
      printf("Error! Enter valid number!\n");
      break;
      return 1;
    }
  }
  return 0;
}
