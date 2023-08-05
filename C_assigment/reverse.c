#include<stdio.h>

int main(){
    int n,i,a=0;
    printf("Enter the number :- ");
    scanf("%d",&n);
    for(i=0;n>0;i++){
        a=n%10;
        printf("%d",a);
        n=n/10;
    }
}