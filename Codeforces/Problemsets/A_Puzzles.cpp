#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    for(int &i : a) cin >> i;
    sort(a.begin(), a.end());
    int gMin = INT_MAX;
    for(int i = 0; i + n - 1 < m; i++) {
        int dif = a[i + n - 1] - a[i];
        gMin = min(gMin, dif);
    }
    cout << gMin << endl;
    return 0;
}