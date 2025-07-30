#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        if(s.find("010") == -1 && s.find("101") == -1) {
            cout << "Bad" << endl;
        } else {
            cout << "Good" << endl;
        }
    }
    return 0;
}