#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[] = {34, 12, 5, 67, 23};
    int start = 0, end = 5 - 1;
    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}