#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int c;
    cin >> c;
    for(int i = 0; i < c; i++) {
        for(int j = 0; j < c; j++) {
            if(i == j && i + j == c - 1) {
                cout << "X";
            } else if(i == j) {
                cout << "\\";
            } else if(i + j == c - 1) {
                cout << "/";
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}