#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    bool hasEven = false;
    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            hasEven = true;
            cout << i << endl;
        }
    }
    if(!hasEven) {
        cout << -1 << endl;
    }
    return 0;
}