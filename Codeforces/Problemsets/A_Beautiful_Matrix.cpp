#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<vector<int>> a(5, vector<int>(5, 0));
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cin >> a[i][j];
        }
    }
    int count = 0;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(a[i][j] == 1) {
                count += abs(i - 2) + abs(j - 2);
            }
        }
    }
    cout << count << endl;
    return 0;
}