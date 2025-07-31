#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    map<char, int> letterCount;
    for(char c : s) {
        letterCount[c]++;
    }
    for(auto& pair : letterCount) {
        cout << pair.first << " : " << pair.second << endl;
    }
    return 0;
}