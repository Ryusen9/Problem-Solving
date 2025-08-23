#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    long double sum = 0;
    long double avg = 0;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sum += x;
    }
    avg = sum / n;
    cout << fixed << setprecision(12) << avg << endl;
    return 0;
}