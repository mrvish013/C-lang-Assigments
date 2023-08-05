#include <stdio.h>

int sumFirstAndLastDigits(int num) {
    int firstDigit, lastDigit, sum;

    lastDigit = num % 10;

    if (num < 0)
        num = -num;

    while (num >= 10) {
        num /= 10;
    }
    firstDigit = num;

    sum = firstDigit + lastDigit;
    return sum;
}

int main() {
    int number, sum;

    printf("Enter a number: ");
    scanf("%d", &number);

    sum = sumFirstAndLastDigits(number);

    printf("Summation of the first and last digits is %d\n", sum);

    return 0;
}