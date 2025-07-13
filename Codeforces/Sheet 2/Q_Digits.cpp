#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        string s = to_string(num);
        reverse(s.begin(), s.end());
        for(int j = 0; j < s.length(); j++) {
            cout << s[j] << " ";
        }
        cout << endl;
    }
    return 0;
}