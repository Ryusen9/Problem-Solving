#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    vector<int> b(n);
    for(int i = 0; i < n; i++) {
        b[a[i] - 1] = i + 1;
    }
    for(int i : b) cout << i << " ";
    return 0;
}