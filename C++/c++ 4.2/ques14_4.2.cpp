#include <iostream>
using namespace std;

class number {
	
	friend void com();
	
public:
    int a=10;
protected :
    int b=50;

};
   void com() 
	{	int a, b;
        if (a > b)
		 {
            cout << "A is greater" << endl;
        } 
		else {
            cout << "B is greater" << endl;
        }
    }

int main() 
{	com();
    return 0;
}