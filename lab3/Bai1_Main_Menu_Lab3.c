#include <stdio.h>
int main() {
  int chon;
  do {
    printf("+-------------------------------+\n");
    printf("|  MUNU CHƯƠNG TRÌNH LAB 3.     |\n");
    printf("+-------------------------------+\n");
    printf("| 0. Thoat chuong trinh.        |\n");
    printf("| 1. Tinh hoc luc sinh vien     |\n");
    printf("| 2. Giai phuong trinh bac 2    |\n");
    printf("| 3. Tinh tien dien             |\n");
    printf("+-------------------------------+\n");
    printf("Ban hay chon chuc nang (0 - 3): ");
    scanf("%d", &chon);
    switch (chon) {
    case 0:
      printf("Ban da chon chuc nang: 0. Thoat chuong trinh.\n");
      break;
    case 1:
      printf("Ban da chon chuc nang: 1. Tinh hoc luc sinh vien.\n");
      break;
    case 2:
      printf("Ban da chon chuc nang: 2. Giai phuong trinh bac 2.\n");
      break;
    case 3:
      printf("Ban da chon chuc nang: 3. Tinh tien dien.\n");
      break;
    default:
      printf("Ban phai chon chuc nang 0 - 3\n");
      break;
    }
  } while (chon != 0);

  return 0;
}
