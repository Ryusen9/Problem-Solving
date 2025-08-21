#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int y;
    cin >> y;
    int a, b, c, d;
    while(true) {
        y++;
        a = y % 10;
        b = (y / 10) % 10;
        c = (y / 100) % 10;
        d = (y / 1000) % 10;
        if(a != b && a != c && a != d && b != c && b != d && c != d) {
            cout << y << endl;
            break;
        }
    }
    return 0;
}