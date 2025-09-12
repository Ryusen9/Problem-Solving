#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    if(!(cin >> t)) return 0;
    while(t--) {
        int k; cin >> k;
        int cnt = 0;
        int x = 1;
        while(true) {
            if(x % 3 != 0 && x % 10 != 3) ++cnt;
            if(cnt == k) { cout << x << '\n'; break; }
            ++x;
        }
    }
    return 0;
}
