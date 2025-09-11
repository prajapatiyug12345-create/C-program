#include <stdio.h>
int main() {
    char sex[50];
    int boys=0, girls=0;
    printf("Enter gender code for 50 students (M/F):\n");
    for(int i=0; i<50; i++) {
        scanf(" %c", &sex[i]);
        if(sex[i] == 'M' || sex[i] == 'm') boys++;
        else if(sex[i] == 'F' || sex[i] == 'f') girls++;
    }
    printf("Boys = %d, Girls = %d\n", boys, girls);
    return 0;
}
