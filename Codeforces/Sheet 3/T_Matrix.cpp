#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<vector<long long>> matrix(n, vector<long long>(n));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    long long d1 = 0, d2 = 0;
    for(int i = 0; i < n; i++) {
        d1 += matrix[i][i];
        d2 += matrix[i][n - i - 1];
    }
    cout << abs(d1 - d2) << endl;
    return 0;
}