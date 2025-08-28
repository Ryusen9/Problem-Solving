#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    int ml = 1, cl = 1;
    for(int i = 1; i < n; i++) {
        if(a[i] >= a[i - 1]) {
            ++cl;
        } else {
            cl = 1;
        }
        ml = max(ml, cl);
    }
    cout << ml << endl;
    return 0;
}