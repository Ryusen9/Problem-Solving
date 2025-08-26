#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    int max_i = 0, min_i = 0;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] > a[max_i]) max_i = i;
        if(a[i] <= a[min_i]) min_i = i;
    
    }
    int t = 0;
    if(max_i > min_i) {
        t = max_i + (n - 1 - min_i) - 1;
    } else {
        t = max_i + (n - 1 - min_i);
    }
    cout << t << endl;
    return 0;
}