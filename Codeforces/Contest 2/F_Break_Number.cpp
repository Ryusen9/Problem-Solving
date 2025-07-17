#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    long long num;
    int maxCount = 0;
    for (int i = 0; i < n; i++) {
        cin >> num;
        int count = 0;
        while (num % 2 == 0) {
            num /= 2;
            count++;
        }
        maxCount = max(maxCount, count);
    }
    cout << maxCount << '\n';
    return 0;
}
