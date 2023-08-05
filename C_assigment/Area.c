#include<stdio.h>

int main()
{
    float C,r;
    printf("Enter the radius of CIRCLE :- ");
    scanf("%f",&r);
    C=3.14*r*r;
    printf("Area of Circle is %f \n",C);

    float R,l,w;
    printf("Enter the length and width of rectangle :-  ");
    scanf("%f %f",&l,&w);
    R=l*w;
    printf("Area of rectangle is %f \n",R);

    float T,b,h;
    printf("Enter the base and height of triangle :- ");
    scanf("%f %f ",&b,&h);
    T=(b*h)/2;
    printf("Area of triangle is %f ",T);
}