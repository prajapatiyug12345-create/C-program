#include <stdio.h>
int main() {
    float P, R, N, I;
    printf("Enter Principal, Rate and Time: ");
    scanf("%f %f %f", &P, &R, &N);
    I = (P * R * N) / 100;
    printf("Simple Interest = %.2f\n", I);
    return 0;
}