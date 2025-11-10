#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int w;
    cin >> w;
    vector<int> a(w);
    for (int i = 0; i < w; i++) {
        cin >> a[i];
    }
    int team = 0;
    for(int i = 0; i < w; i++) {
        if(a[i] != 3) {
            cout << "0" << "\n";
            break;
        } else {
            
        }
    }
    return 0;
}