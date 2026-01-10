#include <iostream>
using namespace std;

int main() {
    // 03/01/2026 -> Array
    int arr[100], n, i;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements:" << endl;
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Array elements are:" << endl;
    for(i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    // Maximum from array
    int max = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "\nMaximum element is: " << max << endl;
    // minimum from array
    int min = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    cout << "Minimum element is: " << min << endl;
    // finding a particular element
    int value, index = -1;
    cout << "Enter the element to search: ";
    cin >> value;
    for(i = 0; i < n; i++) {
        if(arr[i] == value) {
            index = i;
            break;
        }
    }
    if(index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    return 0;
    // task : print the 2nd largest element from the array
}