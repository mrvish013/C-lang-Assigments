#include <iostream>
using namespace std;

class swapp {
    friend void go();

public:
    int a = 10;

protected:
    int b = 20;
};

void go() {
    int a, b;
    swapp hi;
    a = hi.a;
    b = hi.b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << a << endl;
    cout << b << endl;
}

int main() 
{
    go();
    return 0;
}