#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while(n--) {
        uint32_t num;
        cin >> num;
        int k = __builtin_popcount(num);
        uint32_t ans = (1u << k) - 1;
        cout << ans << endl;
    }
    return 0;
}