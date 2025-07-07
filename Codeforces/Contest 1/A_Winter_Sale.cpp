#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long x, p;
    cin >> x >> p;
    double originalPrice;
    originalPrice = p / (1 - x / 100.0);
    cout << fixed << setprecision(2) << originalPrice << endl;
    return 0;
}