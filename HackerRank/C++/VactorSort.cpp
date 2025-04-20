#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> v;
    int size = v.size();
    int n;
    cin >> n;
    if(1 <= n <= 100000) {
        for(int i = 0; i < n; i++) {
            int num;
            cin >> num;
            if(1 <= num <= 1000000000) {
                v.push_back(num);
            }
        }
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    return 0;
}
