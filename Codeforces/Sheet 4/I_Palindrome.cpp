#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    bool isPalindrome = true;
    for(int i =0; i < s.length(); i++) {
        if(s[i] == s[s.length() - 1 - i]) {
            continue;
        } else {
            isPalindrome = false;
            break;
        }
    }
    if(isPalindrome) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}