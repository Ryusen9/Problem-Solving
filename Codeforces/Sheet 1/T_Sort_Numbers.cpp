#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    double a, b, c;
    cin >> a >> b >> c;
    vector<double> nums = {a, b, c};
    vector<double> sorted = nums;
    sort(sorted.begin(), sorted.end());
    for(int i = 0; i < 3; i++) {
        cout << sorted[i] << endl;
    }
    cout << endl;
    for(int i = 0; i < 3; i++) {
        cout << nums[i] << endl;
    }
    return 0;
}