#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    string v = "aeiouy";
    string r = "";
    for(char &c : s) c = tolower(c);
    for(int i = 0; i < s.length(); i++) {
        if(v.find(s[i]) == string::npos) {
            r += ".";
            r += s[i];
        }
    }
    cout << r << endl;
    return 0;
}