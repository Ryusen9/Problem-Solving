#include <bits/stdc++.h>
using namespace std;
// x1 = a + b, x2 = a + c, x3 = b + c, x4 = a + b + c
// a = x4 - x3
// b = x4 - x2
// c = x4 - x1

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> x(4);
    for (int i = 0; i < 4; i++) cin >> x[i];
    sort(x.begin(), x.end());
    cout << x[3] - x[2] << " " << x[3] - x[1] << " " << x[3] - x[0] << "\n";
    return 0;
}