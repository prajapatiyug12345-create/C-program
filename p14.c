#include <stdio.h>
int main() {
    float C, F;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &C);
    F = (9.0 / 5.0) * C + 32;
    printf("Fahrenheit = %.2f\n", F);
    return 0;
}