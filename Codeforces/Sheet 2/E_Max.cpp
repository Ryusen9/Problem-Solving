#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    long long num, max = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> num;
        if(num > max) {
            max = num;
        }
    }
    cout << max << endl;
    return 0;
}