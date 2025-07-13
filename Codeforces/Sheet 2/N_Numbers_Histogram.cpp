#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    char s; int n, num;
    cin >> s;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> num;
        for(int j = 0; j < num; j++) {
            cout << s;
        }
        cout << endl;
    }
    return 0;
}