#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        char c;
        cin >> c;
        c = tolower(c);
        if(c == 'c' || c == 'o' || c == 'd' || c == 'e' || c == 'f' || c == 'r' || c == 's') {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}