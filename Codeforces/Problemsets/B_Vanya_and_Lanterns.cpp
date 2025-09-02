#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, l;
    cin >> n >> l;
    vector<double> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    double max_gap = 0;
    for (int i = 1; i < n; i++) {
        max_gap = max(max_gap, a[i] - a[i - 1]);
    }
    double le = a[0];             
    double re = l - a[n - 1];      
    double res = max({max_gap / 2.0, le, re});
    cout << fixed << setprecision(10) << res << "\n";
    return 0;
}