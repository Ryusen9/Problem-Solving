#include <bits/stdc++.h>
using namespace std;
void print(int n) {
    for(int i = 1; i <= n; i++) {
        cout << i;
        if(i < n) {
            cout << " ";
        }
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if(cin >> n) {
        print(n);
    }
    return 0;
}