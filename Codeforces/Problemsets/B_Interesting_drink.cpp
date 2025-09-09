#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    vector<long long> a(n);
    for(long long &i : a) cin >> i;
    sort(a.begin(), a.end());
    long long q;
    cin >> q;
    while(q--) {
        long long x;
        cin >> x;
        int s = upper_bound(a.begin(), a.end(), x) - a.begin();
        cout << s << "\n";
    }
    return 0;
}