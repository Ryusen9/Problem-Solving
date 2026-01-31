#include <iostream>
using namespace std;

int main() {
    // 10/01/2026 -> bubble sort
    int arr[100], n, i, j, temp;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements:" << endl;
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Sorted array elements are:" << endl;
    for(i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}