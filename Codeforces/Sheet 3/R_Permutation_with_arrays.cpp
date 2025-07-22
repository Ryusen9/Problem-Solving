#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<long long> arrA(n);
    vector<long long> arrB(n);
    for(int i = 0; i < n; i++) {
        cin >> arrA[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> arrB[i];
    }
    sort(arrA.begin(), arrA.end());
    sort(arrB.begin(), arrB.end());
    if(arrA == arrB) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    return 0;
}