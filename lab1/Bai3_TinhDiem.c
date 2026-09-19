#include <stdio.h>
int main() {
  int mssv = 51254;
  char hoten[] = "Le Truong Duy";
  float toan = 8.0f;
  float ly = 7.5f;
  float hoa = 8.5f;

  float diemtrungbinh = (toan * 2 + ly + hoa) / 4.0f;

  printf("Ma so sinh vien: PS%d\n", mssv);
  printf("Ho Va Ten: %s\n", hoten);
  printf("Diem Trung Binh: %.2f\n", diemtrungbinh);
  return 0;
}
