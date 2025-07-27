#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;
    int flip1 = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            if (a[i] < 0) continue;
            else flip1++;
        } else {
            if (a[i] > 0) continue;
            else flip1++;
        }
    }
    int flip2 = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            if (a[i] > 0) continue;
            else flip2++;
        } else {
            if (a[i] < 0) continue;
            else flip2++;
        }
    }
    cout << min(flip1, flip2) << '\n';
    return 0;
}