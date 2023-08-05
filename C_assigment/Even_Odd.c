#include<stdio.h>

int main(){
    int num;
    printf("Enter the number :- ");
    scanf("%d",&num);
    (num%2==0)? printf("Number given is even") :  printf("Number given is ODD");
}