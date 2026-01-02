#include <bits/stdc++.h>
using namespace std;
bool isComposite(int x) {
    if(x <= 1) return false;
    for(int d = 2; d * d <= x; d++) {
        if(x % d == 0) return true;
    }
    return false;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for(int x = 4; x < n; x++) {
        int y = n - x;
        if(isComposite(x) && isComposite(y)) {
            cout << x << " " << y << "\n";
            return 0;
        }
    }
    return 0;
}