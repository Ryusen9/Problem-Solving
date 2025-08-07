#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    getline(cin, s);
    int index = s.find("?");
    s.erase(0, index + 1);
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '=') {
            s[i] = ':';
            s.insert(i + 1, " ");
        } else if(s[i] == '&') {
            s[i] = '\n';
        }
        cout << s[i];
    }
    return 0;
}