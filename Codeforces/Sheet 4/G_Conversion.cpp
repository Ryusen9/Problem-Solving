#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    getline(cin, s);
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == ',') {
            s[i] = ' ';
        }
        if(isupper(s[i])) {
            s[i] = tolower(s[i]);
        } else {
            s[i] = toupper(s[i]);
        }
    }
    cout << s << endl;
    return 0;
}