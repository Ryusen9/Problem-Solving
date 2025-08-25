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
        bool found = false;
        for(int i = 0; i < n - 1; i++) {
            if(a[i] == a[i + 1]) {
                found = true;
                break;
            }
        }
        if(!found) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}