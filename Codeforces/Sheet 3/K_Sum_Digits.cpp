#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string num;
    cin >> num;
    long long sum = 0;
    for(int i = 0; i < n; i++) {
        sum += num[i] - '0';
    }
    cout << sum << endl;
    return 0;
}