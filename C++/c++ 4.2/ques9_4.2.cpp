#include <iostream>
using namespace std;

void add(int a, int b)
{
	cout<<"Addition is : "<<a+b<<endl;
}
void sub(int a, int b, int c)
{
	cout<<"Subtraction is : "<<a-b-c<<endl;
}
void mul(int a, int b,int c, int d)
{
	cout<<"Multiplication is : "<<a*b*c*d<<endl;
}
void div(int a, int b,int c, int d,int e)
{
	cout<<"Division is : "<<a/b/c/d/e<<endl;
}

int main()
{
	add(2,3);
	sub(5,3,1);
	mul(1,2,3,4);
	div(10000,1000,100,10,2);
}