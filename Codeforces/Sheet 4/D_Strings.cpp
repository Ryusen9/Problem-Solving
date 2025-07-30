#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string x , y;
    cin >> x >> y;
    cout << x.length() << " " << y.length() << endl;
    cout << x + y << endl;
    char temp = x[0];
    x[0] = y[0];
    y[0] = temp;
    cout << x << " " << y << endl;
    return 0;
}