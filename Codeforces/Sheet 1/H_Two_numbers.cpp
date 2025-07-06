#include <iostream>
#include <cmath>
using namespace std;
int main() {
    long long a, b;
    double result;
    cin >> a >> b;
    if (b > 0) {
        result = (double)a / b;
    }
    cout << "floor " << a << " / " << b << " = " << floor(result) << endl;
    cout << "ceil " << a << " / " << b << " = " << ceil(result) << endl;
    cout << "round " << a << " / " << b << " = " << round(result) << endl;
}