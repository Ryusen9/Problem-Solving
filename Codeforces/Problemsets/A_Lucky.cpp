#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int sumFront = 0, sumBack = 0;
        int start = 0, end = s.size() - 1;
        while(start < end) {
            sumFront += (s[start] - '0');
            sumBack += (s[end] - '0');
            start++;
            end--;
        }
        if(sumFront == sumBack) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}