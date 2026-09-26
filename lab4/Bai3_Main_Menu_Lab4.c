#include <stdio.h>
int main() {
  int chon;
  do {
    printf("+---------------------------------------------------+\n");
    printf("|              MENU CHUONG TRINH LAB 4              |\n");
    printf("+---------------------------------------------------+\n");
    printf("| 1. Tinh trung binh tong cac so chia het cho 2     |\n");
    printf("| 2. Kiem tra So nguyen to                          |\n");
    printf("| 3. Kiem tra So chinh phuong                       |\n");
    printf("| 4. Thoat chuong trinh                             |\n");
    printf("+---------------------------------------------------+\n");
    printf(">> Xin moi chon chuc nang (1-4): ");
    scanf("%d", &chon);
    switch (chon) {
    case 1: {
      printf("Ban da chon chuc nang: 1. Tinh trung binh tong cac so chia het "
             "cho 2.\n");
      int min, max, i, tong = 0, dem = 0;
      printf("Nhap min: ");
      scanf("%d", &min);
      printf("Nhap max: ");
      scanf("%d", &max);
      if (min > max) {
        printf("Khong co so nao chia het cho 2 trong khoang da nhap!\n");
      } else {
        for (i = min; i <= max; i++) {
          if (i % 2 == 0) {
            tong += i;
            dem++;
          }
        }
        if (dem == 0) {
          printf("Khong co so nao chia het cho 2 trong khoang da nhap!\n");
        } else {
          printf("Tong cac so chia het cho 2: %d\n", tong);
          printf("So luong cac so chia het cho 2: %d\n", dem);
          printf("Trung binh cong: %.2f\n", (float)tong / dem);
        }
      }
      break;
    }
    case 2: {
      printf("Ban da chon chuc nang: 2. Kiem tra So nguyen to.\n");
      int x, i, laNguyenTo = 1;
      printf("Nhap x: ");
      scanf("%d", &x);
      if (x < 2) {
        laNguyenTo = 0;
      } else {
        for (i = 2; i < x; i++) {
          if (x % i == 0) {
            laNguyenTo = 0;
            break;
          }
        }
      }
      if (laNguyenTo == 1) {
        printf("%d la so nguyen to.\n", x);
      } else {
        printf("%d khong phai la so nguyen to.\n", x);
      }
      break;
    }
    case 3:
      printf("Ban da chon chuc nang: 3. Kiem tra So chinh phuong.\n");
      break;
    case 4:
      printf("Ban da chon chuc nang: 4. Thoat chuong trinh.\n");
      break;
    default:
      printf("Ban phai chon chuc nang 1 - 4\n");
      break;
    }
  } while (chon != 4);

  return 0;
}
