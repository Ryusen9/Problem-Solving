#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    bool firstLetter = isupper(s[0]);
    bool allUpper = true;
    for (int i = 1; i < (int)s.size(); ++i) {
        if (islower(s[i])) {
            allUpper = false;
            break;
        }
    }
    if (!firstLetter && allUpper) {
        s[0] = toupper(s[0]);
        for (int i = 1; i < (int)s.size(); ++i) {
            s[i] = tolower(s[i]);
        }  
    } else if (firstLetter && allUpper) {
       for (char &c : s) {
            c = tolower(c);
        } 
    }
    cout << s;
    return 0;
}