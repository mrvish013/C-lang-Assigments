#include <stdio.h>

int findmaxdigit(int num) {
    int maxDigit = 0;
    int digit;

    if (num < 0)
        num = -num;

    while (num > 0) {
        digit = num % 10;
        if (digit > maxDigit)
            maxDigit = digit;
        num /= 10;
    }

    return maxDigit;
}

int main() {
    int number, max;

    printf("Enter a number:- ");
    scanf("%d", &number);

    max = findmaxdigit(number);

    printf("Max number is %d\n", max);

    return 0;
}