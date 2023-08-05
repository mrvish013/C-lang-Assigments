#include<stdio.h>

int main()
{
    int n;
    printf("Enter the year to check :- ");
    scanf("%d",&n);
    if((n%4==0) && (n%100!=0) || (n%400==0))
    {
        printf("It is Leap Year ");
    }
    else{
        printf("It is not a Leap year");
    }
}