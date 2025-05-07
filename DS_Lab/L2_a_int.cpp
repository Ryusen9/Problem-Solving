#include <iostream>
using namespace std;
int main() {
    const int MAX = 100;
    int arr[MAX], n, value, pos;
    cout << "Enter number of elements: ";
    cin >> n;
    if (n < 0 || n >= MAX) {
        cout << "Invalid size!\n";
        return 1;
    }
    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter value to insert: ";
    cin >> value;
    cout << "Enter position to insert at (0 to " << n << "): ";
    cin >> pos;
    if (pos < 0 || pos > n) {
        cout << "Invalid position!\n";
        return 1;
    }
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    n++;
    cout << "Array after insertion:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
