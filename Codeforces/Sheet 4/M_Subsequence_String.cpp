#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    string h = "hello";
    bool found = false;
    for(int i = 0, j = 0; i < s.length() && j < h.length(); i++) {
        if(s[i] == h[j]) {
            j++;
        }
        if(j == h.length()) {
            found = true;
            break;
        }
    }
    if(found) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}