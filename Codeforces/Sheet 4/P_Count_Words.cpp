#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    getline(cin, s);
    int count = 0;
    bool inWord = false;
    for (char c : s) {
        if (isalpha(c)) {
            if (!inWord) {
                inWord = true;
            }
        } else {
            if (inWord) {
                count++;
                inWord = false;
            }
        }
    }
    if (inWord) {
        count++;
    }
    cout << count << endl;
    return 0;
}