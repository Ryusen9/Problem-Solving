#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long testCase;
    cin >> testCase;
    for(int i = 0; i < testCase; i++) {
        long long L, R;
        cin >> L >> R;
        long long minimum = min(L, R);
        long long maximum = max(L, R);
        long long sum = (maximum - minimum + 1) * (minimum + maximum) / 2;
        cout << sum << '\n';
    }
    return 0;
}