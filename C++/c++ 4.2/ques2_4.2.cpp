#include <iostream>
#include <string>
using namespace std;

class bank
{	string name;
	string an;
	string at;
	public :
		
	void details(string name, string an, string at, int bal)
	{
		cout<<"Enter Name : "<<endl;
		getline(cin, name);
		cout<<"Enter Account no : "<<endl;
		getline(cin, an);
		cout<<"Enter Account type :- Saving or Current : "<<endl;
		getline(cin, at);
		cout<<"Enter Balance : "<<endl;
		cin>>bal;
		
		cout<<endl<<"Name : "<<name<<endl<<"Balance : "<<bal<<endl;
	}
	
	void dep(int bal1, int nbal1)
	{
		cout<<endl<<"Enter balance : "<<endl;
		cin>>bal1;
		cout<<"Enter amount to be added : "<<endl;
		cin>>nbal1;
		
		cout<<"Total balance is : "<<bal1+nbal1<<endl;	
	}
	
		void wit(int bal2, int nbal2)
	{
		cout<<endl<<"Enter balance : "<<endl;
		cin>>bal2;
		cout<<"Enter amount to be added : "<<endl;
		cin>>nbal2;
		
		cout<<"Total balance is : "<<bal2-nbal2<<endl;	
	}
};

int main()
{	string name;
	string an;
	string at;
	int bal;
	int bal1;
	int nbal1;
	int bal2;
	int nbal2;
	bank go;
	go.details(name, an, at, bal);
	go.dep(bal1, nbal1);
	go.wit(bal2, nbal2);
}