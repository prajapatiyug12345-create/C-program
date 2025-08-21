#include <stdio.h>
int main() {
    float gross, net, allowance, deduction;
    printf("Enter Gross Salary: ");
    scanf("%f", &gross);
    allowance = 0.10 * gross;
    deduction = 0.03 * gross;
    net = gross + allowance - deduction;
    printf("Net Salary = %.2f\n", net);
    return 0;
}