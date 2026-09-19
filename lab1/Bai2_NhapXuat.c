#include <stdio.h>
int main() {
  int namSinh;
  float diemTB;

  printf("Nham nam sinh: ");
  scanf("%d", &namSinh);
  printf("Nhap Diem");
  scanf("%f", &diemTB);
  //Xuat
  printf("Nam sinh: %d\n", namSinh);
  printf("Tuoi: %d\n", 2026 - namSinh);
  printf("Diem TB: %f\n", diemTB);

  return 0;
}
