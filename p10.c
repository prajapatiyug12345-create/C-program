#include <stdio.h>
int main() {
    float usd, rs, pounds;
    printf("Enter amount in Dollars: ");
    scanf("%f", &usd);
    rs = usd * 48;
    pounds = rs / 70;
    printf("Pounds = %.2f\n", pounds);
    return 0;
}