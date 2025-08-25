#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    bool f = false;
    for(char &c : s) {
        if(c == 'H' || c == 'Q' || c == '9') {
            f = true;
            break;
        }
    }
    if(!f) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
    return 0;
}