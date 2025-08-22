#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    long long evenCount = n / 2;
    long long oddCount = (n + 1) / 2;
    long long sumEven = evenCount * (evenCount + 1);
    long long sumOdd = oddCount * oddCount;
    cout << sumEven - sumOdd << endl;
    return 0;
}