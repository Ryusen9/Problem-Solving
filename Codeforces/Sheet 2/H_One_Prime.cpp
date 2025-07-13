#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, count = 0;
    cin >> x;
    for(int i = 2; i < x; i++) {
        if(x % i == 0) {
            count++;
        }
    }
    if(count > 0) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
    return 0;
}