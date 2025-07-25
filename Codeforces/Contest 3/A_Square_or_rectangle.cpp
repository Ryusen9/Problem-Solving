#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        long long w, h;
        cin >> w >> h;
        if(w == h) {
            cout << "Square" << endl;
        } else {
            cout << "Rectangle" << endl;
        }
    }
    return 0;
}