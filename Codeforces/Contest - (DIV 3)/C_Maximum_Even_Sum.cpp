#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        long long bOdd = b;
        while (bOdd % 2 == 0) bOdd /= 2;
        long long op1 = a + b;               
        long long op2 = a * bOdd + b / bOdd;  
        long long ans = -1;
        if (op1 % 2 == 0) ans = op1;
        if (op2 % 2 == 0) ans = max(ans, op2);
        cout << ans << "\n";
    }
    return 0;
}