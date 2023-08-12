#include <iostream>
using namespace std;

inline int mul(int a, int b)
{
	cout<<"Enter a : "<<endl;
	cin>>a;
	cout<<"Enter b : "<<endl;
	cin>>b;
	
	cout<<endl<<"Multiplication is : "<<a*b<<endl;
	return 0;
}

inline int cubic(int c)
{
	cout<<endl<<"Enter a number : "<<endl;
	cin>>c;
	
	cout<<endl<<"Cube is : "<<c*c*c<<endl;
	return 0;
}

int main()
{	int a, b, c;
	mul(a, b);
	cubic(c);
}