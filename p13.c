#include <stdio.h>
int main() {
    float bytes, KB, MB, GB;
    printf("Enter size in bytes: ");
    scanf("%f", &bytes);
    KB = bytes / 1024;
    MB = KB / 1024;
    GB = MB / 1024;
    printf("KB = %.2f, MB = %.2f, GB = %.2f\n", KB, MB, GB);
    return 0;
}