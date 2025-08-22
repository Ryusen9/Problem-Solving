#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        string w = "";
        int n;
        cin >> n;
        string a;
        cin >> a;
        int m;
        cin >> m;
        string b, c;
        cin >> b >> c;
        for(int i = 0; i < m; i++) {
            if(c[i] == 'D') {
                a += b[i];
            } else {
                a = b[i] + a;
            }
        }
        cout << a << endl;
    }
    return 0;
}