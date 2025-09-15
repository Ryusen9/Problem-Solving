#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int t = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] + k <= 5) {
            t++;
        }
    }
    cout << t / 3 << endl;
    return 0;
}