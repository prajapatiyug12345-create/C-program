#include <stdio.h>
int main() {
    float L, H, A;
    printf("Enter base and height of triangle: ");
    scanf("%f %f", &L, &H);
    A = (H * L) / 2;
    printf("Area of triangle = %.2f\n", A);
    return 0;
}