#include <iostream>
#include <cmath>
using namespace std;
int main() {
    long long a, b, c, d, mul;
    cin >> a >> b >> c >> d;
    mul = (a % 100) * (b % 100) * (c % 100) * (d % 100) % 100;
    if(mul < 10) {
        cout << "0" << mul << endl;
    } else {
        cout << mul << endl;
    }
    return 0;
}