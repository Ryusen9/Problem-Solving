#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i = 1; i <= n * 4; i++) {
        if(i % 4 == 0) {
            cout << "PUM" << endl;
        } else {
            cout << i << " ";
        }
    }
    return 0;
}