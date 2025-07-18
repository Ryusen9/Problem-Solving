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
    long long x;
    cin >> x;
    int position = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] == x) {
            position = i;
            break;
        }
    }
    cout << position << endl;
    return 0;
}