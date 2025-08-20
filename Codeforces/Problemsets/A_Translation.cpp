#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string t, s;
    cin >> t >> s;
    reverse(t.begin(), t.end());
    if(t == s) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}