#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    int count = 0;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if(a + b == 2 || b + c == 2 || a + c == 2) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}