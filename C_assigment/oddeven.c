#include <stdio.h>

int main()
{
    int numbers[10];
    int i;
    int evenCount = 0, oddCount = 0;
    int evenSum = 0, oddSum = 0;

    printf("Enter 10 numbers:\n");

    for (i = 0; i < 10; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    
    for (i = 0; i < 10; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            evenCount++;
            evenSum += numbers[i];
        }
        else
        {
            oddCount++;
            oddSum += numbers[i];
        }
    }

    printf("Total Number of even numbers: %d\n", evenCount);
    printf("Total Number of odd numbers: %d\n", oddCount);
    printf("Sum of even numbers: %d\n", evenSum);
    printf("Sum of odd numbers: %d\n", oddSum);

    return 0;
}