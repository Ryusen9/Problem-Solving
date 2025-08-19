#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    while(k--) {
        int rem = 0;
        rem = n % 10;
        if(rem == 0) {
            n /= 10;
        } else {
            n--;
        }
    }
    cout << n << endl;
    return 0;
}