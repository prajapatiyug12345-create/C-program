#include <stdio.h>
int main() {
    int n, sum=0;
    float mean;
    printf("Enter number of values: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d values:\n", n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    mean = sum / (float)n;
    printf("Sum = %d, Mean = %.2f\n", sum, mean);
    return 0;
}
