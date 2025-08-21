#include <stdio.h>
int main() {
    float gross_sales, net_sales;
    printf("Enter Gross Sales: ");
    scanf("%f", &gross_sales);
    net_sales = gross_sales - (0.10 * gross_sales);
    printf("Net Sales = %.2f\n", net_sales);
    return 0;
}