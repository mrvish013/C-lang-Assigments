#include<stdio.h>

int main(){
    int d;
    float y;
    printf("Enter the days :- ");
    scanf("%d",&d);
    y=d/365;
    printf("Total year are %f\n",y);

    int d1,y1;
    printf("Enter the years :- ");
    scanf("%d",&y1);
    d1=365*y;
    printf("Hence the days are %d",d1);
}