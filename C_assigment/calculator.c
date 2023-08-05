#include<stdio.h>
int main()
{
    int a=111678,b=4,c;
    int calculater;
    printf("Choose any case for arihtmetic operation:");
    scanf("%d", &calculater);
    switch(calculater)
    {
        case 1:
        c=a+b;
        printf("The addition of a and b is %d",c);
        break;
         case 2:
        c=a-b;
        printf("The subtraction of a and b is %d",c);
        break;
         case 3:
        c=a/b;
        printf("The division of a and b is %d",c);
        break;
         case 4:
        c=a*b;
        printf("The multiplication of a and b is %d",c);
        break;
        case 5:
        c=a%b;
        printf("The modulo of a and b is %d",c);
        break;
        default:
        printf("invalid");
        break;
    }
    
}