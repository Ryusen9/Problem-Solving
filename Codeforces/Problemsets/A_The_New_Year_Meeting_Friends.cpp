#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> p(3);
    for (int &i : p) cin >> i;
    sort(p.begin(), p.end());
    int meet = p[1];
    int total = abs(p[0] - meet) + abs(p[1] - meet) + abs(p[2] - meet);
    cout << total << "\n";
    return 0;
}
