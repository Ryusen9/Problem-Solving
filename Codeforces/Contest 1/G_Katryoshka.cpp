#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int n, m, k;
    cin >> n >> m >> k;
    long long int minVal = min({n, m, k});
    long long int newN = (n - minVal) / 2;
    long long int newM = m - minVal;
    long long int newK = k - minVal;
    if (newN <= newK) {
        cout << newN + minVal << endl;
    } else {
        cout << newK + minVal << endl;
    }
    return 0;
}