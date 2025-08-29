#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    int evenCount = 0, evenIdx = 0;
    int oddCount = 0, oddIdx = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] % 2 == 0) {
            evenCount++;
            evenIdx = i + 1;
        } else {
            oddCount++;
            oddIdx = i + 1;
        }
    }
    if(evenCount == 1) {
        cout << evenIdx << "\n";
    } else {
        cout << oddIdx << "\n";
    }
    return 0;
}