#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long a, b, c, d;
    cin  >> a >> b >> c >> d;
   if(a + b - c == d || a - b + c == d) cout << "YES" << endl;
   else if(a + b * c == d || a * b + c == d) cout << "YES" << endl;
   else if(a - b * c == d || a * b - c == d) cout << "YES" << endl;
   else cout << "NO" << endl;
    return 0;
}