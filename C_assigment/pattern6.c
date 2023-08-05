#include<stdio.h>
int main()
{
    int i,n,k,j;
    char ch='A'-1;
    printf("ENter the NO :>> ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        for(k=1;k<n-1;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%c",(ch+j));
        }
        printf("\n");
    }
}