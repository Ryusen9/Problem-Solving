#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int x = 0;
    while(n--) {
        string s;
        cin >> s;
        if(s == "++X") {
            ++x;
        } else if(s == "X++") {
            x++;
        } else if(s == "--X") {
            --x;
        } else if(s == "X--") {
            x--;
        }
    }
    cout << x << endl;
    return 0;
}