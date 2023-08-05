#include <stdio.h>

int main()
{
    char alphabate;
    printf("Enter any charcter :-");
    scanf("%c", &alphabate);
    switch (alphabate)
    {
    case 'a': case'e': case 'i': case'o':case 'u':
        printf("It is VOWEL");
        break;

    default:
        printf("Consonent hai re pagle ;) ");
        break;
    }
}