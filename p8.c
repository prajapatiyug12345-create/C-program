#include <stdio.h>

int main() {
    float rs, dollar;
    printf("Enter amount in Rs: ");
    scanf("%f", &rs);
    dollar = rs / 48;
    printf("%.2f Rs = %.2f $\n", rs, dollar);
    return 0;
}