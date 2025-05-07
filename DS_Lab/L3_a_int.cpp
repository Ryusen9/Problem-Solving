#include <iostream>
using namespace std;
int main() {
    const int MAX = 100;
    int arr[MAX], n, value, pos = -1;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    cout << "Enter value to search: ";
    cin >> value;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == value) {
            pos = i;
            break;
        }
    }
    if (pos != -1)
        cout << "Value found at index " << pos << endl;
    else
        cout << "Value not found.\n";

    return 0;
}
