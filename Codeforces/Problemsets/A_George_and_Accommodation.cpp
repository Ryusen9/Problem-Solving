#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int c = 0;
    while(n--) {
        int x, y;
        cin >> x >> y;
        if(x < y && y - x >= 2) {
            c++;
        }
    }
    cout << c << endl;
    return 0;
}