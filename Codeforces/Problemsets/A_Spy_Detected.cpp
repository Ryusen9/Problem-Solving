#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int &i : a) cin >> i;
        if(a[0] != a[1] && a[0] != a[2]) {
            cout << 1 << "\n";
        } else {
            for(int i = 1; i < n; i++) {
                if(a[i] != a[i - 1]) {
                    if(a[i] != a[i + 1]) {
                        cout << i + 1 << "\n";
                        break;
                    }
                }
            }
        }
    }
    return 0;
}