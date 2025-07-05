#include <iostream>
#include <string>
using namespace std;
int main() {
    long long x;
    cin >> x;
    string firstDigit = to_string(abs(x));
    if(firstDigit[0] % 2 == 0) {
        cout << "EVEN" << endl;
    } else {
        cout << "ODD" << endl;
    }
    return 0;
}