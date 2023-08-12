#include <iostream>
#include <string>
using namespace std;

void add(int a[], int b[])
{	int i;
	for(i=0; i<=1; i++)
	{
		cout<<a[i]+b[i]<<endl;	
	}
}

int main()
{	int i;
	int a[i]= {11,2};
	int b[i]={13,5};
	
	add(a, b);
	return 0;
}

