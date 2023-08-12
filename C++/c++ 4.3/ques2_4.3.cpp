#include <iostream>
using namespace std;

template <typename go>
void sorrt(go a[], int len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (a[i] > a[j]) {
                go temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
int main() {
    int a[] = {10,56,57,88,7,45,588,1,6,114};

    int len = sizeof(a) / sizeof(int);
    sorrt(a, len);

    cout << "Sorted array in Ascending order : ";
    for (int i = 0; i < len; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
   return 0;
}