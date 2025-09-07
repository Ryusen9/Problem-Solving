#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        long long a, b;
        cin >> a >> b;
        long long diff = abs(a - b);
        if(diff == 0) {
            cout << "0" << endl;
        } else {
            int moves = (diff + 9) / 10;
            cout << moves << endl;
        }
    }
    return 0;
}