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
    if(1 <= n && n <= 100000) {
        for(int i = 0; i < n; i++) {
            int num;
            cin >> num;
            if(1 <= num && num <= 1000000000) {
                v.push_back(num);
            }
        }
    }
    int x;
    cin >> x;
    if(1 <= x && x <= n) {
        int a, b;
        cin >> a >> b;
        if(1 <= a && a < b && a <= n) {
            v.erase(v.begin() + a - 1, v.begin() + b);
        }
    }
    std::cout << v.size() << std::endl;
    for(int j = 0; j < v.size(); j++) {
        cout << v[j] << " ";
    }
    return 0;
}