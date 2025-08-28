#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a[10000], b[10000];
    for(int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    int c = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(a[i] == b[j]) {
                c++;
            }
        }
    }
    cout << c << endl;
    return 0;
}