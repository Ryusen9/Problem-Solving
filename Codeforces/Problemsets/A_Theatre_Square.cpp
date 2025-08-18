#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
     long long n, m, a;
    cin >> n >> m >> a;
    long long countN = (n + a - 1) / a;
    long long countM = (m + a - 1) / a; 
    cout << countN * countM << '\n';
    return 0;
}