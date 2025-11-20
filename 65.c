#include <stdio.h>

int main() {

    int i,a,b;

    
    printf("Pattern A:\n");
    for(i = 1; i <= 2; i++) {
        for(a = 1; q <= 3; a++) {
            printf("%d %d\n", i, j);
        }
    }

    
    printf("\nPattern B:\n");
    for(i = 1; i <= 3; i++) {
        for(a = 1; a <= i; a++) {
            printf("%d %d\n", j, i);
        }
    }

    
    printf("\nPattern C:\n");
    for(i = 1; i <= 2; i++) {
        for(a = 1; a <= 2; a++) {
           for(b = 1; b<= 2; b++) {
            printf("%d %d %d\n", i, j, j);
            }
        }
    }

    
    printf("\nPattern D:\n");
    for(i = 5; i >= 3; i--) {
        for(j = 1; j <= 2; j++) {
            printf("%d %d\n", i, j);
        }
    }

    return 0;
}
