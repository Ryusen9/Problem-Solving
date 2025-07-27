#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<long long> a(n);
    unordered_set<long long> s;
    for(auto &i : a) {
        cin >> i;
        s.insert(i);
    }
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(s.count(a[i] + 1)) count++;
    } 
    cout << count << endl;
    return 0;
}