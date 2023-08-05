#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter the value of a and b :>> ");
    scanf("%d%d",&a,&b);
    printf("Before Swap \nA %d \nB %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After Swapping \nA %d \nB %d ",a,b);
}