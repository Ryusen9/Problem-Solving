#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *ptr1 = &a;
    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Value of ptr: " << ptr1 << endl;
    int b = 20;
    int *ptr2 = &b;
    int sum = 0;
    sum = *ptr1 + *ptr2;
    cout << "Sum of a and b: " << sum << endl;
    int *ptr3 = &sum;
    cout << "Address of sum: " << &sum << endl;
    cout << "Value of ptr3: " << ptr3 << endl;
}