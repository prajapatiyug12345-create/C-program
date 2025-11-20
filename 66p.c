#include <stdio.h>

int main() {

    int i, j;

    
    printf("Pattern A:\n");
    for(i = 1, j = 5; i <= 5; i++, j--) {
        printf("%d %d\n", i, j);
    }

    
    printf("\nPattern B:\n");
    for(i = 1, j = 5; i <= 3; i++, j--) {
        printf("%d %d\n", j, i);
    }

    return 0;
}
