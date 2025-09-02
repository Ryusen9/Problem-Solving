#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        for(char &c : s) c = toupper(c);
        cout << (s == "YES" ? "YES" : "NO") << endl;
    }
    return 0;
}