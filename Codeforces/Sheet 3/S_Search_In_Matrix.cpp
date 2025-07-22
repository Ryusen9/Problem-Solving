#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    int x;
    cin >> x;
    bool found = false;
    for (int i = 0; i < n && !found; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == x) {
                found = true;
                break;
            }
        }
    }
    if (found) {
        cout << "will not take number" << endl;
    } else {
        cout << "will take number" << endl;
    }
    return 0;
}