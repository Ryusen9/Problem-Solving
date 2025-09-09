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
        int sum = 0, rem = 0;
        rem = n % 10;
        sum += rem;
        n /= 10;
        sum += n;
        cout << sum << "\n";
    }
    return 0;
}