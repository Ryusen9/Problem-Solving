#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int c = 0, m = 0;
    while(n--) {
        int a, b;
        cin >> a >> b;
        c -= a;
        c += b;
        m = max(m, c);
    }
    cout << m << endl;
    return 0;
}