#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    getline(cin, s);
    vector<char> l;
    for(char &c : s) {
        if(isalpha(c)) {
            l.push_back(c);
        }
    }
    sort(l.begin(), l.end());
    auto it = unique(l.begin(), l.end());
    l.erase(it, l.end());
    cout << l.size() << endl;
    return 0;
}