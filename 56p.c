#include <stdio.h>
#include <math.h>
int main() {
    int n, temp, sum=0, digit, count=0;
    printf("Enter number: ");
    scanf("%d", &n);
    temp = n;
    while(temp > 0) {
        count++;
        temp /= 10;
    }
    temp = n;
    while(temp > 0) {
        digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }
    if(sum == n)
        printf("Armstrong number\n");
    else
        printf("Not Armstrong\n");
    return 0;
}
