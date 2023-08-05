#include <stdio.h>

int main() {
    int n = 1,a;
    printf("Enter the number :- ");
    scanf("%d",&a);
    for (int i = 1; i <= a; i++) {   
        for (int j = 1; j <= i; j++) {
            printf("%d ", n++);
        }
        printf("\n");
    }

    return 0;
}