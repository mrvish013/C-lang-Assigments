#include <iostream>
using namespace std;

class student
{
	public :
	void roll(int r)	
	{
		cout<<"Enter roll no : ";
		cin>>r;
	}
};
class test : public student
{
	public :
	void marks(int s1, int s2)	
	{
		cout<<"Enter marks of subject 1 : ";
		cin>>s1;
		cout<<"Enter marks of subject 2 : ";
		cin>>s2;
		
		cout<<"Marks are : "<<endl<<s1<<endl<<s2<<endl;
	}
};
class result : public test
{
	public :
	void total(int s11, int s22)	
	{	
	
		cout<<"Enter marks of subject 1 : ";
		cin>>s11;
		cout<<"Enter marks of subject 2 : ";
		cin>>s22;
		cout<<"Total is : "<<s11+s22<<endl;
		
	}
};
int main()
{
	int r, s1, s2, s11, s22;
	
	test go;
	go.roll(r);
	go.marks(s1, s2);
	
	result hi;
	hi.total(s11, s22);
}
