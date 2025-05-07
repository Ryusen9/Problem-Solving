#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    const int MAX = 100;
    int arr[MAX], n, value, low, high, mid;
    bool found = false;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter " << n << " integers (unsorted):\n";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    sort(arr, arr + n);
    cout << "Enter value to search: ";
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
        cout << "Value found at index " << mid << endl;
    else
        cout << "Value not found.\n";

    return 0;
}
