#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int p;
    cin >> p;
    vector<int> X(p);
    for (int i = 0; i < p; i++) {
        cin >> X[i];
    }
    int q;
    cin >> q;
    vector<int> Y(q);
    for (int i = 0; i < q; i++) {
        cin >> Y[i];
    }
    vector<bool> passed(n + 1, false);
    for (int i = 0; i < p; i++) {
        passed[X[i]] = true;
    }
    for (int i = 0; i < q; i++) {
        passed[Y[i]] = true;
    }
    bool allPassed = true;
    for (int i = 1; i <= n; i++) {
        if (!passed[i]) {
            allPassed = false;
            break;
        }
    }
    if (allPassed)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;

    return 0;
}