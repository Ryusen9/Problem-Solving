#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    int minVal, count = 0;
    bool isFirst = true;
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if(isFirst) {
            minVal = num;
            isFirst = false;
        } else {
            minVal = min(minVal, num);
        }
        count++;
        if(count == k || i == n - 1) {
            cout << minVal << " ";
            count = 0;
            isFirst = true;
        }
    }
    cout << endl;
    return 0;
}