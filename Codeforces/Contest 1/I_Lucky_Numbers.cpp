#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int num, firstDigit, lastDigit;
    cin >> num;
    lastDigit = num % 10;
    firstDigit = num / 10;
    if(lastDigit == 0 || firstDigit == 0) {
        cout << "YES" << endl;
    } else if (firstDigit % lastDigit == 0 || lastDigit % firstDigit == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}