#include <stdio.h>
#define PI 3.14159
int main(void) {
    double chieuDai, chieuRong, banKinh;
  scanf("%lf %lf %lf", &chieuDai, &chieuRong, &banKinh);
  printf("Chu vi hinh chu nhat: %.2f\n", 2 * (chieuDai + chieuRong));
  printf("Dien tich hinh chu nhat: %.2f\n", chieuDai * chieuRong);
  printf("Chu vi hinh tron: %.2f\n", 2 * PI * banKinh);
  printf("Dien tich hinh tron: %.2f\n", PI * banKinh * banKinh);
  return 0;
}
