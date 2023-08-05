#include<stdio.h>

int main(){
    int n,i,max=0;
    printf("Enter how much element you have to store :- ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the element :- ");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    printf("The greatest number is %d", max);
}