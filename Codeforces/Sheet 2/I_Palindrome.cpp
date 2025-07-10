#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long x, newNum, rev = 0, rem;
    cin >> x;
    newNum = x;
    while(x > 0) {
        rem = x % 10;
        rev = rev * 10 + rem;
        x /= 10;
    }
    cout << rev << endl;
    if(rev == newNum) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}