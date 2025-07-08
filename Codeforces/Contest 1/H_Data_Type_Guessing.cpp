#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, k, a, value;
    cin >> n >> k >> a;
    value = n * k;
    if(value % a != 0) {
        cout << "double" << endl;
    } else {
        long long total = value / a;
        if(total <= 2147483647) {
            cout << "int" << endl;
        } else {
            cout << "long long" << endl;
        }
    }
    return 0;
}