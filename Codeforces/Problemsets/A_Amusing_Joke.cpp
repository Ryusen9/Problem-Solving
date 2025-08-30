#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string g, h, s;
    cin >> g >> h >> s;
    string combined = g + h;
    sort(combined.begin(), combined.end());
    sort(s.begin(), s.end());
    if (combined == s) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}