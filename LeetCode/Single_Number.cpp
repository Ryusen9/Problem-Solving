#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> nums;
    int n, num;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> num;
        nums.push_back(num);
    }
    if(n == 1) {
        cout << nums[0] << "\n";
        return 0;
    }
    bool unique = false;
    for(int i = 0; i < n; i++) {
        if(nums[i] != nums[n - 1 - i]) {
            unique = true;
            cout << nums[i] << "\n";
            break;
        }
    }
    return 0;
}