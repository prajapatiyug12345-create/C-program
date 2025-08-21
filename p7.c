#include <stdio.h>

int main() {
    int minutes;
    float hours;
    printf("Enter minutes: ");
    scanf("%d", &minutes);
    hours = (float)minutes / 60;
    printf("%d minutes = %.2f hours\n", minutes, hours);
    return 0;
}