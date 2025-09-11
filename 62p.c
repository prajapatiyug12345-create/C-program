#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int count = 0;
    for (int i = 1; i <= 500; i++) {
        if (isPrime(i)) {
            count++;
        }
    }
    printf("Total prime numbers between 1 and 500 = %d\n", count);
    return 0;
}
