#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    int bills = 0;
    bills += n / 100; n %= 100;
    bills += n / 20;  n %= 20;
    bills += n / 10;  n %= 10;
    bills += n / 5;   n %= 5;
    bills += n / 1;   n %= 1;
    cout << bills << endl;
    return 0;
}