#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    while(true) {
        int pos = s.find("WUB");
        if(pos == -1) {
            break;
        } else {
            s.erase(pos, 3);
            if(pos != 0 && pos < (int)s.size() && s[pos - 1] != ' ') {
                s.insert(pos, " ");
            }
        }
    }
    cout << s << endl;
    return 0;
}