#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    string c = "";
    for(int i = 0; i < (int)s.length(); i++) {
        if(s[i] == '.') c += '0';
        else if(s[i] == '-' && s[i + 1] == '.') {
            c += '1';
            i++;
        } else if(s[i] == '-' && s[i + 1] == '-') {
            c += '2';
            i++;
        }
    }
    cout << c << "\n";
    return 0;
}