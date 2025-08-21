#include <stdio.h>
int main() {
    float rs, dollars;
    printf("Enter amount in Rs: ");
    scanf("%f", &rs);
    dollars = rs / 48;
    printf("Dollars = %.2f\n", dollars);
    return 0;
}