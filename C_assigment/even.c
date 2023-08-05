#include<stdio.h>

int main(){
    int n, a[10], i;
    int even = 0;
    printf("Enter the size of an array :- ");
    scanf("%d", &n);
    printf("Enter the element of array :- ");
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            even++;
        }
    }
    printf("\n Total number of even number is :- %d", even);
}
