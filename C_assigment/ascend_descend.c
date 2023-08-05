#include<stdio.h>

int main(){
    int a[10],b[10];
    int i,n,x,y;
    printf("----------1 st Array----------\n");
    printf("Enter the value of first array :- ");
    for(i=0;i<=5;i++){
        scanf("%d",&a[i]);
    }
    printf("----------2 nd Array----------\n");
    printf("Enter the value of second array :- ");
    for(i=0;i<=5;i++){
        scanf("%d",&b[i]);
    }
    printf("For ascending order press 1:-\nFor descending order press 2:-");
    scanf("%d",&n);
    if(n==1){
        for (i = 0; i <=6; ++i){
        for (int j = i + 1; j <=6; j++){
            if (a[i] > a[j]){
                x = a[i];
                a[i] = a[j];
                a[j] = x;
            }
        }
    }
        printf("Ascending number of 1 st Array will be :-\n");
        for(i=0;i<=6;i++)
        printf("%d\n",a[i]);
      for (i = 0; i <=6; ++i){
        for (int j = i + 1; j <= 6; j++){
            if (b[i] > b[j]){
                y = b[i];
                b[i] = b[j];
                b[j] = y;
            }
        }
    }
        printf("Ascending number of 2 nd Array will be :-\n");
        for(i=0;i<=6;i++)
        printf("%d\n",b[i]);
    }
}