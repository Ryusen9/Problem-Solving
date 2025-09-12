#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--)
    {
        int n, m, k; cin >> n >> m >> k;
        vector<int> a(n), b(m);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < m; i++) cin >> b[i];
        int count = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                int c = a[i] + b[j];
                if(c <= k)
                {
                    count++;
                }
            }
        }
        cout << count << "\n";
    }
    return 0;
}