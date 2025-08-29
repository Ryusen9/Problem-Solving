#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> groups(n);
    for (int i = 0; i < n; i++) cin >> groups[i];
    sort(groups.begin(), groups.end());
    int i = 0, j = n - 1;
    int taxis = 0;
    while (i <= j) {
        int sum = groups[j];
        j--;
        while (i <= j && sum + groups[i] <= 4) {
            sum += groups[i];
            i++;
        }
        taxis++;
    }
    cout << taxis << "\n";
}