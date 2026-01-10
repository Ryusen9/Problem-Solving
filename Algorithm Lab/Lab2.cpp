#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 10/01/2026 -> binary search
    int arr[100], n, i, left, right, mid, value, index = -1;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements:" << endl;
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    cout << "Sorted array elements are:" << endl;
    for(i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Enter the element to search: ";
    cin >> value;
    left = 0;
    right = n - 1;
    while(left <= right) {
        mid = left + (right - left) / 2;
        if(arr[mid] == value) {
            index = mid;
            break;
        } else if(arr[mid] < value) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    if(index != -1) {
        cout << "Element found at index: " << index << " value: " << arr[index] << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    return 0;
}