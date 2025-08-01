#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        string s, t;
        cin >> s >> t;
        string newString = "";
        int maxLen = max(s.length(), t.length());
        for(int i = 0; i < maxLen; i++) {
            if(i < s.length()) {
                newString += s[i];
            }
            if(i < t.length()) {
                newString += t[i];
            }
        }
        cout << newString << endl;
    }
return 0;
}