#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    const int MAX = 100;
    string arr[MAX], value;
    int n, low, high, mid;
    bool found = false;
    cout << "Enter number of strings: ";
    cin >> n;
    cout << "Enter " << n << " strings (unsorted):\n";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    sort(arr, arr + n);
    cout << "Enter string to search: ";
    cin >> value;
    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == value) {
            found = true;
            break;
        }
        else if (arr[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }
    if (found)
        cout << "String found at index " << mid << endl;
    else
        cout << "String not found.\n";

    return 0;
}