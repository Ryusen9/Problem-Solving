#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s1, s2;
    cin >> s1 >> s2;
    string n = "";
    if(s1.length() == s2.length()) {
        for(int i = 0; i < s1.length(); i++) {
            if(s1[i] == s2[i]) {
                n += "0";
            } else {
                n += "1";
            }
        }
    }
    cout << n << endl;
    return 0;
}