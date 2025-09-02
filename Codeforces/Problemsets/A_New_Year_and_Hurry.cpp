#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    int t_left = 240 - k;
    int problems_solved = 0;
    for (int i = 1; i <= n; i++) {
        t_left -= i * 5;
        if (t_left >= 0) problems_solved++;
    }
    cout << problems_solved << endl;
    return 0;
}