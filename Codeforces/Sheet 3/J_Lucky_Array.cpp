#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<long long> arr;
    long long num;
    int freq = 0;
    for(int i = 0; i < n; i++) {
        cin >> num;
        arr.push_back(num);
    }
    long long minimum = arr[0];
    for(int i = 0; i < n; i++) {
        minimum = min(minimum, arr[i]);
    }
    for(int i = 0; i < n; i++) {
        if(arr[i] ==  minimum) freq++;
    }
    if(freq % 2 != 0) {
        cout << "Lucky" << endl;
    } else {
        cout << "Unlucky" << endl;
    }
    return 0;
}