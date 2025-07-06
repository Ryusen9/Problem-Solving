#include <iostream>
using namespace std;
int main() {
    long long a, b, multiResult;
    std::cin >> a >> b;
    multiResult = a * b;
    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " * " << b << " = " << multiResult << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    return 0;
}