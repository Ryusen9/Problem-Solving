#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string x, y;
    cin >> x >> y;
    if(x > y) {
        cout << y << endl;
    } else {
        cout << x << endl;
    }
    return 0;
}