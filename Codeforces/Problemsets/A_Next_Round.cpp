#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> p(n);
    for(int i = 0; i < n; i++) {
        cin >> p[i];
    }
    int tp = p[k - 1];
    int c = 0;
    for(int i = 0; i < n; i++) {
        if(p[i] > 0 && p[i] >= tp) {
            c++;
        }
    }
    cout << c << endl;
    return 0;
}