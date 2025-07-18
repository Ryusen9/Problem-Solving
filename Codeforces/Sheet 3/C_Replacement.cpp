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
    for(int j = 0; j < n; j++) {
        if(arr[j] > 0) {
            arr[j] = 1;
        } else if(arr[j] < 0) {
            arr[j] = 2;
        } else {
            arr[j] = 0;
        }
    }
    for(int k = 0; k < n; k++) {
        cout << arr[k] << " ";
    }
    cout << endl;
    return 0;
}