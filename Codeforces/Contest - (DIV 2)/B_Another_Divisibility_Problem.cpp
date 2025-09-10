#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        string s = to_string(n);
        for (long long i = 1; i <= 1e6; i++) {
            string temp = s + to_string(i);
            long long val = stoll(temp);
            if (val % (n + i) == 0) {
                cout << i << "\n";
                break;
            }
        }
    }
    return 0;
}