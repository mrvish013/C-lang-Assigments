#include <iostream>
#include <string>
using namespace std;

string name;


class student 
{
	public :
	void per(int p)
	{	
		cout<<"Enter percentage : ";
		cin>>p;
		
		cout<<endl<<"Student % is : "<<p<<endl;
	}	
};

class teacher 
{
	public :
	void sal(int s)
	{
		cout<<endl<<"Enter salary : ";
		cin>>s;
		
		cout<<"Teacher salary amount is : "<<s<<endl;
	}	
};


class info : public student, public teacher
{
	public :
	void infor(string name, int age)
	{
		cout<<"Enter name : ";
		getline(cin, name);
		cout<<"Enter age : ";
		cin>>age;
		
		
	}	
};

int main()
{
	string name;
	string name1;
	int s, p, age, age1;
	
	info go;
	go.infor(name, age);
	go.per(p);
	go.sal(s);
	
	
}