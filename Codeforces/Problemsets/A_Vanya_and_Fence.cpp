#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, f;
    cin >> n >> f;
    // vector<int> a(n);
    // for(int i = 0; i < n; i++) cin >> a[i];
    int w = 0;
    // for(int i = 0; i < a.size(); i++) {
    //     if(a[i] > f) {
    //         w += 2;
    //     } else {
    //         w += 1;
    //     }
    // }
    while(n--) {
        int num;
        cin >> num;
        if(num > f) {
            w += 2;
        } else {
            w += 1;
        }
    }
    cout << w << endl;
    return 0;
}