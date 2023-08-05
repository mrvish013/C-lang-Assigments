#include <stdio.h>

int main() {
    int n, Char = 65;

    printf("Enter the number :- ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", Char);
            Char++;
        }
        printf("\n");
    }

}