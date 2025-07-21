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
    int op = 0;
    bool allEven = true;
    while(allEven) {
        for(int i = 0; i < n; i++) {
            if(arr[i] % 2 != 0) {
                allEven = false;
                break;
            }
        }
        if(allEven) {
            for(int i = 0; i < n; i++) {
                arr[i] /= 2;
            }
            op++;
        }
    }
    cout << op << endl;
    return 0;
}