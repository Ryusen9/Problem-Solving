#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long a, b, k;
    cin >> a >> b >> k;
    if(a % k == 0 && b % k == 0) {
        cout << "Both" << endl;
    } else if (a % k == 0 && b % k != 0) {
        cout << "Memo" << endl;
    } else if (a % k != 0 && b % k == 0) {
        cout << "Momo" << endl;
    } else {
        cout << "No One" << endl;
    }
    return 0;
}