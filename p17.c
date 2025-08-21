#include <stdio.h>
int main() {
    float L, A, P;
    printf("Enter side of square: ");
    scanf("%f", &L);
    A = L * L;
    P = 4 * L;
    printf("Area = %.2f, Perimeter = %.2f\n", A, P);
    return 0;
}