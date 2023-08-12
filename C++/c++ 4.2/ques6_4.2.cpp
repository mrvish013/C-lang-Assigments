#include <iostream>
#include <string>
using namespace std;
string name;

class cricketer
{
	public : 
	void input(string name, int age)
	{
		cout<<"Enter name : ";
		getline(cin, name);
		cout<<"Age : ";
		cin>>age; 
		
		cout<<endl<<"Player details : "<<endl<<name<<endl<<age<<endl;
	}
};
	
class batsman : public cricketer
{
	public :
	void avg(int match, int run)
	{
		cout<<endl<<"Enter matches : ";
		cin>>match;
		cout<<endl<<"Enter total runs : ";
		cin>>run;
		
		cout<<endl<<"Average is : "<<run/match<<endl;
			
	}	
};

int main()

{
	string name;
	int age, match, run;
	
	batsman go;
	go.input(name, age);
	go.avg(match, run);
}
