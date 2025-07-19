#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    long long arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    reverse(arr, arr + n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}