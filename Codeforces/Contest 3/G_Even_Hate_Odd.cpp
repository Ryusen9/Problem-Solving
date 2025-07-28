#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int even = 0, odd = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 0) even++;
            else odd++;
        }

        if (n % 2 != 0) {
            cout << -1 << '\n';
        } else {
            cout << abs(even - odd) / 2 << '\n';
        }
    }

    return 0;
}