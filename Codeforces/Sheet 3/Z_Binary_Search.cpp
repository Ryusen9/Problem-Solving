#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end()); 
    while (q--) {
        int item;
        cin >> item;
        bool flag = false;
    int beg = 0, end = n - 1;
        while (beg <= end) {
            int mid = (beg + end) / 2;
            if (arr[mid] == item) {
                flag = true;
                break;
            } 
            else if (arr[mid] > item) {
                end = mid - 1;
            } else {
                beg = mid + 1;
            }
        }
        if (flag) {
            cout << "found" << '\n';
        } else {
            cout << "not found" << '\n';
        }
    }
    return 0;
}