#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    int left = 0, right = n - 1;
    int sereja = 0, dima = 0;
    for(int i = 0; i < n; i++) {
        int choosen = 0;
        if(a[left] >= a[right]) {
            choosen = a[left];
            left++;
        } else {
            choosen = a[right];
            right--;
        }
        if(i % 2 == 0) {
            sereja += choosen;
        } else {
            dima += choosen;
        }
    }
    cout << sereja << ' ' << dima << '\n';
    return 0;
}