#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    sort(a.begin(), a.end());
    int max = a[n - 1];
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] < max) {
            int r = max - a[i];
            count += r;
        }
        if(a[i] == max) break;
    }
    cout << count << '\n';
    return 0;
}