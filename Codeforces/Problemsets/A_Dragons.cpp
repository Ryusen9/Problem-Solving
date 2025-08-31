#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, s;
    cin >> s >> n;
    vector<pair<int, int>> d(n);
    for(auto &x : d) {
        cin >> x.first >> x.second;
    }
    sort(d.begin(), d.end());
    for(auto &x : d) {
        if(s <= x.first) {
            cout << "NO\n";
            return 0;
        }
        s += x.second;
    }
    cout << "YES\n";
    return 0;
}