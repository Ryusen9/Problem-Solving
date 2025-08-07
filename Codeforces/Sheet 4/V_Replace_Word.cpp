#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    getline(cin, s);
    int pos = s.find("EGYPT");
    while(1) {
        if(pos != -1) {
            s.replace(pos, 5, " ");
            pos = s.find("EGYPT", pos + 1);
        } else {
            break;
        }
    }
    cout << s << endl;
    return 0;
}