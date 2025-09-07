#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int k, x;
        cin >> k >> x;
        for(int i = 1; i <= k; i++) {
            if(x % 3 == 1 && ((x - 1) / 3) % 2 == 1) {
                x = (x - 1) / 3;
            } else {
                x *= 2;
            }
        }
        cout << x << "\n";
    }
    return 0;
}