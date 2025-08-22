#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    string p = "";
    int g = 0;
    while(t--) {
        string c;
        cin >> c;
        if(c != p) {
            g++;
            p = c;
        }
    }
    cout << g << endl;
    return 0;
}