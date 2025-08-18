#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string s;
    cin >> s;
    int r = 0;
    for(int i = 1; i < s.length(); i++) {
        if(s[i] == s[i - 1]) {
            r++;
        }
    }
    cout << r << endl;
    return 0;
}