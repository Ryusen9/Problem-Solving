#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    string str = s;
    int n = s.length();
    if(n == 1) {
        cout << s << endl;
        return 0;
    }
    for(int i = 1; i < n; i++) {
        string s1 = s.substr(0,i);
        string s2 = s.substr(i);
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        str = min(str, s1 + s2);
    }
    cout << str << endl;
    return 0;
}