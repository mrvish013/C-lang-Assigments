#include <iostream>
using namespace std;

class calc
{
	public :
	
	 calc()
	{
		cout<<endl<<"1. Addition"<<endl<<"2. Subtraction"<<endl<<"3. Multiplication"<<endl<<"4. Division"<<endl;
		
		
	}	
	void add(int a, int b)
	{
		cout<<endl<<"Enter a : "<<endl;
		cin>>a;
		cout<<"Enter b : "<<endl;
		cin>>b;
		
		cout<<endl<<"Addition is : "<<a+b<<endl;
	}
		void sub(int c, int d)
	{
		cout<<endl<<"Enter c : "<<endl;
		cin>>c;
		cout<<"Enter d : "<<endl;
		cin>>d;
		
		cout<<endl<<"Subtraction is : "<<c-d<<endl;
	}
		void mul(int e, int f)
	{
		cout<<endl<<"Enter e : "<<endl;
		cin>>e;
		cout<<"Enter f : "<<endl;
		cin>>f;
		
		cout<<endl<<"Multiplication is : "<<e*f<<endl;
	}
		void div(int g, int h)
	{
		cout<<endl<<"Enter g : "<<endl;
		cin>>g;
		cout<<"Enter h : "<<endl;
		cin>>h;
		
		cout<<endl<<"Division is : "<<g/h<<endl;
	}
};

int main()
{
	int a, b, c, d, e, f, g, h;
	calc go;
	go.add(a, b);
	go.sub(c, d);
	go.mul(e, f);
	go.div(g, h);
	
	
}