#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;

    while(t--)
    {
        int n; cin >> n;
        int temp = n;
        if(n %7 == 0) cout << n << endl;
        else{
            n -= n % 10;

            while(n % 7 != 0)
            {
                n++;
            }
            cout << n << endl;
        }
    }
    return 0;
}