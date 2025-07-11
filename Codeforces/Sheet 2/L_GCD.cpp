#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int num1, num2, n1, n2, rem, gcd;
    cin >> num1 >> num2;
    n1 = num1, n2 = num2;
    while(n2 != 0) {
        rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }
    gcd = n1;
    cout << gcd << endl;
    return 0;
}