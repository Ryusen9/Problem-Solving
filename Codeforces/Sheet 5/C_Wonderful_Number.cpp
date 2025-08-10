#include <bits/stdc++.h>
using namespace std;
bool isOdd(int n) {
    return n % 2 != 0;
}

bool isBinaryPalindrome(int n) {
    string b;
    while(n > 0) {
        b.push_back((n % 2) + '0');
        n /= 2;
    }
    string rev = b;
    reverse(rev.begin(), rev.end());
    return b == rev;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    if(isOdd(n) && isBinaryPalindrome(n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}