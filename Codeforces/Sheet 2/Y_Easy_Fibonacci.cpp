#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a = 0, b = 1;
    for(int i = 0; i < n; i++) {
        if(i > 0) cout << " ";
        cout << a;
        int temp = a + b;
        a = b;
        b = temp;
    }
    cout << endl;
    return 0;
}