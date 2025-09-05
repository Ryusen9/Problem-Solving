#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while(n--) {
        int rating;
        cin >> rating;
        if(1900 <= rating) {
            cout << "Division 1\n";
        } else if(1600 <= rating && rating <= 1899) {
            cout << "Division 2\n";
        } else if(1400 <= rating && rating <= 1599) {
            cout << "Division 3\n";
        } else {
            cout << "Division 4\n";
        }
    }
    return 0;
}