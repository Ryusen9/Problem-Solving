#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    char c;
    cin  >> c;
    if(c == 122) {
        cout << char(c - 25) << endl;
    } else {
        cout << char(c + 1) << endl;
    }
    return 0;
}