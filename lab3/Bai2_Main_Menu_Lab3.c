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
    case 1: {
      printf("Ban da chon chuc nang: 1. Tinh hoc luc sinh vien.\n");
      float diem;
      printf("Nhap diem sinh vien (0.0 - 10.0): ");
      scanf("%f", &diem);
      if (diem < 0.0 || diem > 10.0) {
        printf("Diem so nhap vao khong hop le!\n");
      } else if (diem >= 9.0) {
        printf("Hoc luc: Xuat sac\n");
      } else if (diem >= 8.0) {
        printf("Hoc luc: Gioi\n");
      } else if (diem >= 6.5) {
        printf("Hoc luc: Kha\n");
      } else if (diem >= 5.0) {
        printf("Hoc luc: Trung binh\n");
      } else if (diem >= 3.5) {
        printf("Hoc luc: Yeu\n");
      } else {
        printf("Hoc luc: Kem\n");
      }
      break;
    }
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
