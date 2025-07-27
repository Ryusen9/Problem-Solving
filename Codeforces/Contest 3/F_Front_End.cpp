#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    int f = 0, b = n - 1;
    bool fromLeft = true;
    while(f <= b) {
        if(fromLeft) {
            cout << a[f++] << " ";
        } else {
            cout << a[b--] << " ";
        }
        fromLeft = !fromLeft;
    }
    return 0;
}