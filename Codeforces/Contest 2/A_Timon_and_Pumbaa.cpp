#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long a, b;
    cin >> a >> b;
    long long result = a - b;
    if(result >= 0) {
        cout << result << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}