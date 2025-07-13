#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int testcase, num;
    cin >> testcase;
    while(testcase--) {
        cin >> num;
        long long result = 1;
        for(int i = 1; i <= num; i++) {
            result *= i;
        }
        cout << result << endl;
    }
    return 0;
}