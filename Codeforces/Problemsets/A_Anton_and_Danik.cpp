#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a = 0, b = 0;
    for(char &i : s) {
        if(i == 'A') {
            a++;
        } else {
            b++;
        }
    }
    if(a > b) {
        cout << "Anton" << endl;
    } else if(a < b) {
        cout << "Danik" << endl;
    } else {
        cout << "Friendship" << endl;
    }
    return 0;
}