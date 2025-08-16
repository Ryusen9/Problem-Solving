#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    vector<int> n;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] > '0' && s[i] <= '3') {
            n.push_back(s[i] - '0');
        }
    }
    sort(n.begin(), n.end());
    string r;
    for(int i = 0; i < n.size(); i++) {
        r += to_string(n[i]);
        if(i != n.size() - 1) {
            r += '+';
        }
    }
    cout << r << endl;
    return 0;
}