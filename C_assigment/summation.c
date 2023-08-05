#include <stdio.h>

int sumdigits(int num) {
    int sum = 0;
    int digit;

    if (num < 0)
        num = -num;

    while (num > 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    return sum;
}

int main() {
    int number, sum;

    printf("Enter a number:- ");
    scanf("%d", &number);

    sum = sumdigits(number);

    printf("Summation of the digits is %d\n", sum);

    return 0;
}