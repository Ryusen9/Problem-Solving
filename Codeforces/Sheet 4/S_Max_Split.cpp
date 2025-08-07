#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int balance = 0, count = 0;
    string temp = "";
    vector<string> g;
    for(char c : s) {
        temp += c;
        if(c == 'L') {
            balance++;
        } else if(c == 'R') {
            balance--;
        }
        if(balance == 0) {
            count++;
            if(!temp.empty()) {
                g.push_back(temp);
                temp = "";
            }
        }
    }
    cout << count << endl;
    for(string grp : g) {
        cout << grp << endl;
    }
    return 0;
}