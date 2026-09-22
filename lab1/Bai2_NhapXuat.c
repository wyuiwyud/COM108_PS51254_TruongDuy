#include <stdio.h>
int main(){
  int namSinh;
  float diemTB;
  printf("Nhap nam sinh:");
  scanf("%d", &namSinh);

  printf("Nhap diem:");
  scanf("%f", &diemTB);
  //Xuat
  printf("Nam Sinh: %d\n",namSinh);
  printf("Tuoi: %d\n",2026 - namSinh );
  printf("DiemTB: %f\n",diemTB);
  return 0;
}
