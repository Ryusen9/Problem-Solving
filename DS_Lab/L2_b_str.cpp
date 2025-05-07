#include <iostream>
#include <string>
using namespace std;
int main() {
    const int MAX = 100;
    string arr[MAX], value;
    int n, pos = -1;
    cout << "Enter number of strings: ";
    cin >> n;
    cout << "Enter " << n << " strings:\n";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    cout << "Enter string to delete: ";
    cin >> value;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == value) {
            pos = i;
            break;
        }
    }
    if (pos == -1) {
        cout << "String not found.\n";
        return 0;
    }
    for (int i = pos; i < n - 1; ++i)
        arr[i] = arr[i + 1];

    --n;
    cout << "Array after deletion:\n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}