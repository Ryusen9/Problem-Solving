#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
     while(t--) {
        int num;
        cin >> num;
        vector<int> parts;
        int place = 1;
        while(num > 0) {
            int digit = num % 10;
            if(digit != 0) {
                parts.push_back(digit * place);
            }
            num /= 10;
            place *= 10;
        }
        reverse(parts.begin(), parts.end());
        cout << parts.size() << "\n";
        for(int x : parts) cout << x << " ";
        cout << "\n";
     }
    return 0;
}