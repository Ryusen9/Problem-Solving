#include <iostream>
using namespace std;
int main() {
    long long a, b, ans;
    char s, c;
    cin >> a >> s >> b >> c >> ans;
    switch (s)
    {
    case '+':
        if(a + b == ans) {
            cout << "Yes" << endl;
        } else {
            cout << a + b << endl;
        }
        break;
    case '-':
        if(a - b == ans) {
            cout << "Yes" << endl;
        } else {
            cout << a - b << endl;
        }
        break;
    case '*':
        if(a * b == ans) {
            cout << "Yes" << endl;
        } else {
            cout << a * b << endl;
        }
        break;
    default:
        return 0;
        break;
    }
}