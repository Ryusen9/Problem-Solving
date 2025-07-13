#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i = n; i >= 1; i--) {
        cout << string(i, '*') << endl;
    }
    return 0;
}