#include <stdio.h>
#include <math.h>

int main() {
    int num, sq, temp, digits = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    sq = num * num;
    temp = num;

    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    int lastDigits = sq % (int)pow(10, digits);

    if (lastDigits == num)
        printf("%d is an Automorphic number.\n", num);
    else
        printf("%d is NOT an Automorphic number.\n", num);

    return 0;
}
