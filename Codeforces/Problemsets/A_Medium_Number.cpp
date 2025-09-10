#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        vector<int> nums(3);
        for(int i = 0; i < 3; i++) {
            cin >> nums[i];
        }
        sort(nums.begin(), nums.end());
        cout << nums[1] << endl;
    }
    return 0;
}