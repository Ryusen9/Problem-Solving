#include <bits/stdc++.h>
using namespace std;
void eq(int &a, int &b) {
    long long sum = 0;
    for(int i = 0; i <= b; i += 2){
        sum += (long long)pow(a, i);
    }
    sum -= 1;
    cout << sum << endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    eq(a, b);
    return 0;
}