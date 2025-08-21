#include <stdio.h>
int main() {
    float L, B, A, P;
    printf("Enter length and breadth: ");
    scanf("%f %f", &L, &B);
    A = L * B;
    P = 2 * (L + B);
    printf("Area = %.2f, Perimeter = %.2f\n", A, P);
    return 0;
}