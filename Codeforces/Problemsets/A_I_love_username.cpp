#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<long long> a(n);
    for(long long &i : a) cin >> i;
    long long max = a[0], min = a[0]; int c = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] > max) {
            max = a[i];
            c++;
        }
        if(a[i] < min) {
            min = a[i];
            c++;
        }
    }
    cout << c << endl;
    return 0;
}