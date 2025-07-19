#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    std::vector<long long> arr;
    long long num;
    for(int i = 0; i < n; i++) {
        cin >> num;
        arr.push_back(num);
    }
    std::vector<long long> reversedArr(arr.rbegin(), arr.rend());
    bool isPalindrome = true;
    for(int i = 0; i < n; i++) {
        if(arr[i] != reversedArr[i]) {
            isPalindrome = false;
        }
    }
    if(isPalindrome) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}