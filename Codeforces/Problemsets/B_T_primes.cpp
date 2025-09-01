#include <bits/stdc++.h>
using namespace std;
bool isPrime(long long x) {
    if (x < 2) return false;
    if (x % 2 == 0 && x != 2) return false;
    for (long long i = 3; i * i <= x; i += 2) {
        if (x % i == 0) return false;
    }
    return true;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long root = sqrt(n);
        if (root * root == n && isPrime(root)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}