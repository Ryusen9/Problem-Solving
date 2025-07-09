#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long x;
    int n, even = 0, odd = 0, positive = 0, negative = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x;
        if(x % 2 == 0) {
            even++;
        } else {
            odd++;
        }
        if (x > 0) {
            positive++;
        } else if (x < 0) {
            negative++;
        }
    }
    cout << "Even: " << even << endl << "Odd: " << odd << endl << "Positive: " << positive << endl << "Negative: " << negative << endl;
    return 0;
}