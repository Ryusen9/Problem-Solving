#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    for (char &c : s) {
        c = toupper(c);
    }
    map<char, int> freq;
    for (char c : s) {
        if (c == 'E' || c == 'G' || c == 'Y' || c == 'P' || c == 'T') {
            freq[c]++;
        }
    }
    int result = min({freq['E'], freq['G'], freq['Y'], freq['P'], freq['T']});
    cout << result << endl;
    return 0;
}