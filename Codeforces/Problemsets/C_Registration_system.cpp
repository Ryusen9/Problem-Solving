#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    unordered_map<string, int> db;
    while(t--) {
        string n;
        cin >> n;
        if(db[n] == 0) {
            cout << "OK\n";
            db[n] = 1;
        } else {
            int k = db[n];
            string nn = n + to_string(k);
            cout << nn << endl;
            db[n] = k + 1;
            db[nn] = 1;
        }
    }
    return 0;
}