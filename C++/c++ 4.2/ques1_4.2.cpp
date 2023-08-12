#include <iostream>
using namespace std;

class calculator
{
	public :
	void add(int a, int b)
	{
		cout<<endl<<"Enter a : ";
		cin>>a;
		cout<<"Enter b : ";
		cin>>b;
		
		cout<<endl<<"Additon is : "<<a+b<<endl;
		
		}	
		void sub(int a, int b)
	{
		cout<<endl<<"Enter a : ";
		cin>>a;
		cout<<"Enter b : ";
		cin>>b;
		
		cout<<endl<<"Subtraction is : "<<a-b<<endl;
		
		}
		void mul(int a, int b)
	{
		cout<<endl<<"Enter a : ";
		cin>>a;
		cout<<"Enter b : ";
		cin>>b;
		
		cout<<endl<<"Multiplication is : "<<a*b<<endl;
		
		}
		void div(int a, int b)
	{
		cout<<endl<<"Enter a : ";
		cin>>a;
		cout<<"Enter b : ";
		cin>>b;
		
		cout<<endl<<"Division is : "<<a/b<<endl;
		
		}
};

int main()
{
	int a, b, n;
	cout<<"Enter choice : "<<endl<<"1. Addition"<<endl<<"2. Subtraction"<<endl<<"3. Multiplication"<<endl<<"4. Division"<<endl;
	cin>>n;
	
	
	calculator go;
	if(n==1)
	{
		go.add(a, b);
		}
		else if(n==2)
	{
		go.sub(a, b);
		}
		else if(n==3)
	{
		go.mul(a, b);
		}
		else if(n==4)
	{
		go.div(a, b);
		}
		else {
			cout<<"Enter valid input"<<endl;
		}
}
