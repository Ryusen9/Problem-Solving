#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    double a, b, c, d, pow1, pow2;
    cin >> a  >> b >> c >> d;
    pow1 = b * log(a);
    pow2 = d * log(c);
    if (pow1 > pow2) {
        cout << "YES" << endl;
    } else if (pow1 <= pow2) {
        cout << "NO" << endl;
    } else {
        cout << "NO" << endl;
    } 
    return 0;
}