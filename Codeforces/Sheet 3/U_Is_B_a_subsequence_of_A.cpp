#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }
    int j = 0;
    for(int i = 0; i < n && j < m; i++) {
        if(a[i] == b[j]) {
            j++;
        }
    }
    if(j == m) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}