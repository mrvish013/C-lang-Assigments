#include<iostream>
using namespace std;

int area(int r) {
    return 3.14 * r * r;
}

int area(int l, int b) {
    return l * b;
}

float area(float base, float height) {
    return 0.5 * base * height;
}

int main()
 {
    int r, l, b;
    float base, height;
    cout << "Enter radius : ";
    cin >> r;
    cout << "Area of circle is " << area(r) << endl;
    cout << "Enter length and breadth : ";
    cin >> l >> b;
    cout << "Area of rectangle is " << area(l, b) << endl;
    cout << "Enter base and height : ";
    cin >> base >> height;
    cout << "Area of triangle is " << area(base, height) << endl;
}