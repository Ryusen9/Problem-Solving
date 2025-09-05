#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int k, r;
    cin >> k >> r;
    for (int i = 1; i <= 10; i++) {
    int cost = k * i;
    if (cost % 10 == 0 || cost % 10 == r) {
            cout << i << "\n";
            return 0;
        }
    }
    return 0;
}