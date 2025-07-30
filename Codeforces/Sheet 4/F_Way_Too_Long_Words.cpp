#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        if(s.length() <= 10) {
            cout << s << endl;
        } else {
            cout << s.front() << s.length() - 2 << s.back() << endl;
        }
    }
    return 0;
}