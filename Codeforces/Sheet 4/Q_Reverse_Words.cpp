#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    getline(cin, s);
    string word;
    for (char c : s) {
        if (c == ' ') {
            reverse(word.begin(), word.end());
            cout << word << ' ';
            word.clear();
        } else {
            word += c;
        }
    }
    reverse(word.begin(), word.end());
    cout << word << '\n';
    return 0;
}
