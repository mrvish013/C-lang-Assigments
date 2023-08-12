#include<iostream>
using namespace std;


template <typename hey>
int swapp(hey &a1, hey &b1)
{		a1=a1+b1;
		b1=a1-b1;
		a1=a1-b1;
		
		return 0;
		
}

int main()
{

	int a1=10;
	int b1=20;
	swapp(a1, b1);
	cout<<"a1 is : "<<a1<<endl<<"b1 is : "<<b1<<endl;
}