#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int c = 0;
    while(n--) {
        int x;
        cin >> x;
        if(x == 1) {
            c++;
        }
    }
    if(c > 0) {
        cout << "HARD" << endl;
    } else {
        cout << "EASY" << endl;
    }
    return 0;
}