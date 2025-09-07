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
        sort(a.begin(), a.end());
        bool f = true;
        for(int i = 1; i < n; i++) {
            if(a[i] - a[i - 1] > 1) {
                f = false;
                break;
            }
        }
        cout << (f ? "YES" : "NO") << endl;
    }
    return 0;
}