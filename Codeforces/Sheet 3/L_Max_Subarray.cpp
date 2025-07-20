#include <bits/stdc++.h>
using namespace std;

void findingMaxSubarrays(vector<long long>& arr) {
    int n = arr.size();
    for (int len = 1; len <= n; len++) {
        for (int start = 0; start <= n - len; start++) {
            long long maxValue = arr[start];
            for (int k = start; k < start + len; k++) {
                maxValue = max(maxValue, arr[k]);
            }
            cout << maxValue << " ";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int testcase;
    cin >> testcase;
    while (testcase--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        findingMaxSubarrays(arr);
        cout << endl;
    }
    return 0;
}