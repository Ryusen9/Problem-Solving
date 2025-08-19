#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int X = 0, Y = 0, Z = 0;
    while(n--) {
        int x, y, z;
        cin >> x >> y >> z;
        X += x;
        Y += y;
        Z += z;
    }
    if(X == 0 && Y == 0 && Z == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}