#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    sort(a.begin(), a.end(), greater<int>());
    int total_sum = accumulate(a.begin(), a.end(), 0);
    int my_sum = 0, coin_taken = 0, remaining_sum = 0;
    for(int i = 0; i < n; i++) {
        my_sum += a[i];
        remaining_sum = total_sum - my_sum;
        coin_taken++;
        if(my_sum > remaining_sum) break;
    }
    cout << coin_taken << endl;
    return 0;
}