#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a(4);
    for(int &i : a) cin >> i;
    sort(a.begin(), a.end());
    int c = 0;
    for(int i = 0; i < 3; i++) {
        if(a[i] == a[i + 1]) {
            c++;
        }
    }
    cout << c << endl;
    return 0;
}