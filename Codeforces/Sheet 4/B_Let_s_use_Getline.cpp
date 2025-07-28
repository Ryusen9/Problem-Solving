#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    getline(cin, s);
    for(int i =0; i < s.length(); i++) {
        if(s[i] == '\\') {
            break;
        } else {
            cout << s[i];
        }
    }
    return 0;
}