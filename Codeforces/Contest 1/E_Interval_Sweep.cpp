#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    int total = a + b;
    int maxOdd = (total + 1) / 2;
    int maxEven = total / 2;
     if (
        (a <= maxOdd && b <= maxEven && total >= 1) ||
        (b <= maxOdd && a <= maxEven && total >= 1)
    ) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}