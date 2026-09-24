
#include <stdio.h>

#define PI 3.14159

int main() {
  float chieuDai, chieuRong, r, chuVi, dienTich;

  printf("Nhap vao chieu dai: ");
  scanf("%f", &chieuDai);

  printf("Nhap vao chieu rong: ");
  scanf("%f", &chieuRong);

  printf("Nhap vao ban kinh: ");
  scanf("%f", &r);

  // Hinh chu nhat
  chuVi = (chieuDai + chieuRong) * 2;
  dienTich = chieuDai * chieuRong;
  printf("Chu vi hinh chu nhat: %.2f\n", chuVi);
  printf("Dien tich hinh chu nhat: %.2f\n", dienTich);

  // Hinh tron
  chuVi = r * 2 * PI;
  dienTich = (r * r) * PI;
  printf("Chu vi hinh tron: %.2f\n", chuVi);
  printf("Dien tich hinh tron: %.2f\n", dienTich);

  return 0;
}
