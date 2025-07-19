#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int arr[n];
    int minVal = INT_MAX;
    int minPos = -1;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] < minVal) {
            minVal = arr[i];
            minPos = i + 1;
        }
    }
    cout << minVal << " " << minPos << endl;
    return 0;
}