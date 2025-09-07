#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, m;
    cin >> n >> m;
    long long current = 1;
    long long totalTime = 0;
    for(int i = 0; i < m; i++) {
        long long x;
        cin >> x;
        if(x >= current) {
            totalTime += (x - current);
        } else {
            totalTime += (n - current + x);
        }
        current = x;
    }
    cout << totalTime << "\n";
    return 0;
}