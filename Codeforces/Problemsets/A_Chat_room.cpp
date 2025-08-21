#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    string w = "hello";
    int j = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == w[j]) {
            j++;
            if(j == s.length()) break;
        }
    }
    if(j == w.length()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}