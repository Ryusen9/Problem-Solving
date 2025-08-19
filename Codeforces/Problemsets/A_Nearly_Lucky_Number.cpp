#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    string s = to_string(n);
    int c = 0;
    for(char &i : s) {
        if(i == '4' || i == '7') {
            c++;
        }
    }
    if(c == 4 || c == 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}