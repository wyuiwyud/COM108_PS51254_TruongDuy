#include <stdio.h>
#define PI 3.14159
int main(){
    const float PII = 3.14159;
    float r = 5.5, cv1, cv2, dt;
    cv1 = r*2*PI;
    cv2 = r*2*PII;

    printf("Chu vi 1: %.2f\nChu vi 2: %.2f\n",cv1,cv2);
    return 0;
}
