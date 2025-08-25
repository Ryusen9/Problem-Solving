#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        int c = a % b;
        if(c == 0) {
            cout << c << endl;
        } else {
            cout << b - c << endl;
        }
    }
    return 0;
}