#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long correctPass = 1999, attempt;
    while(cin >> attempt) {
        if(attempt == correctPass) {
            cout << "Correct" << endl;
            break;
        } else {
            cout << "Wrong" << endl;
        }
    }
    return 0;
}