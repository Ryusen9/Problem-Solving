#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int testcase;
    cin >> testcase;
    while(testcase--) {
        int n;
        cin >> n;
        vector<long long> arr;
        long long num;
        for(int i = 0; i < n; i++) {
            cin >> num;
            arr.push_back(num);
        }
        long long smallestResult = 0;
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                long long equation = arr[i] + arr[j] + j - i;
                if(equation < smallestResult || smallestResult == 0) {
                    smallestResult = equation;
                }
            }
        }
        cout << smallestResult << endl;
    }
    return 0;
}