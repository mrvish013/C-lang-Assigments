#include<stdio.h>

int main() {
    int i, n, b = 1;
    printf("Enter the number :-");
    scanf("%d", &n);
    for(i = n; i >= 1; i--) {
        b = b * i;
    }
    printf("Factorial of %d is %d", n, b);
    return 0;
}
