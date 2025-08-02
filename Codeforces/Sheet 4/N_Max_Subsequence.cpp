#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string s;
    cin >> s;
    s = s.substr(0, n);
    int count = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] != s[i + 1]) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}