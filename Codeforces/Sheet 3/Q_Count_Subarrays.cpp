#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int length = 1;
        int count = 1;
        for(int i = 1; i < n; i++) {
            if(arr[i] >= arr[i - 1]) {
                length++;
            } else {
                length = 1;
            }
            count += length; 
        }
        cout << count << endl;
    }
    return 0;
}