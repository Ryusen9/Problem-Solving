#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int ans = 0;
    while(n > 0) {
        if(n % 2 == 1) {
            ans++;
        }
        n /= 2;
    }
    cout << ans << endl;
    return 0;
}