#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while(n--) {
        long long x, y;
        cin >> x >> y;
        long long sum = 0;
        long long start = min(x, y) + 1;
        long long end = max(x, y) - 1;
        for(long long i = start; i <= end; i++) {
            if(i % 2 != 0) {
                sum += i;
            }
        }
        cout << sum << endl;
    } 
    return 0;
}