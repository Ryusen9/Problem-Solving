#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if(a + b == c || a + c == b || b + c == a) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}