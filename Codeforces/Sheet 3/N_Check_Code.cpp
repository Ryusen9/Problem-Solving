#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    if(s.length() != a + b + 1 || s[a] != '-') {
        cout << "No" << endl;
        return 0;
    }
    for(int i = 0; i < s.length(); i++) {
        if(i == a) continue;
        if(!isdigit(s[i])) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}