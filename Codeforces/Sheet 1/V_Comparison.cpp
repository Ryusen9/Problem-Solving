#include <iostream>
using namespace std;
int main() {
    long long a, b;
    char s;
    cin >> a >> s >> b;
        switch (s)
        {
        case '>':
            if(a > b) {
                cout << "Right" << endl;
            } else cout << "Wrong" << endl;
            break;
        case '<':
            if(a < b) {
                cout << "Right" << endl;
            } else cout << "Wrong" << endl;
            break;
        case '=':
            if(a == b) {
                cout << "Right" << endl;
            } else cout << "Wrong" << endl;
            break;
        default:
            cout << "Wrong" << endl;
            break;
        }
    return 0;
}