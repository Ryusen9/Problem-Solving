#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int f = 0, c = 0;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if(x == -1) {
            if(f > 0) {
                --f;
            } else {
                ++c;
            }
        } else {
            f += x;
        }
    }
    cout << c << "\n";
    return 0;
}