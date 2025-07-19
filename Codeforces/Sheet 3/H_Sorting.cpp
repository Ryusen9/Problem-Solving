#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<long long> arr;
    for(int i = 0; i < n; i++) {
        long long num;
        cin >> num;
        arr.push_back(num);
    }
    sort(arr.begin(), arr.end());
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}