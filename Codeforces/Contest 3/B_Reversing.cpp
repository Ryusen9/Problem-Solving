#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    for(int i = 0; i < n; i++) {
        if(a[i] == 0) {
            reverse(a.begin(), a.begin() + i);
        }
    }
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
    return 0;
}