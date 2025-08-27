#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c;
    cin >> a >> b >> c;
    int e1 = a + b + c;
    int e2 = a * b * c;
    int e3 = (a + b) * c;
    int e4 = a * (b + c);
    int e5 = a * b + c;
    int e6 = a + b * c;
    cout << max({e1, e2, e3, e4, e5, e6}) << endl;
    return 0;
}