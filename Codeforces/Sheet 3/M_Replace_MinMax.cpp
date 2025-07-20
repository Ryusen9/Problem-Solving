#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<long long> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    long long minimum = arr[0];
    long long maximum = arr[0];
    for(int i = 0; i < n; i++) {
        minimum = min(minimum, arr[i]);
        maximum = max(maximum, arr[i]);
    }
    for(int i = 0; i < n; i++) {
        if(arr[i] == minimum) {
            arr[i] = maximum;
        } else if(arr[i] == maximum) {
            arr[i] = minimum;
        }
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}