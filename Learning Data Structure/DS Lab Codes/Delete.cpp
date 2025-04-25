#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr;
    srand(time(0)); 
    for (int i = 0; i < n; i++) {
        arr.push_back(rand() % 100 + 1);
    }
    cout << "Array before deletion:\n";
    for (int i = 0; i < arr.size(); i++) {
        cout << "Index " << i + 1 << ": " << arr[i] << endl;
    }
    while (true) {
        int pos;
        cout << "\nEnter the position to delete: ";
        cin >> pos;
        if (pos < 1 || pos > arr.size()) {
            cout << "Invalid position!" << endl;
        } else {
            arr.erase(arr.begin() + pos - 1);
            cout << "Array after deletion:\n";
            for (int i = 0; i < arr.size(); i++) {
                cout << "Index " << i + 1 << ": " << arr[i] << endl;
            }
        }
        int e;
        cout << "\nPress 1 to exit or 0 to continue: ";
        cin >> e;
        if (e == 1) {
            break;
        } else if (e == 0) {
            continue;
        } else {
            cout << "Invalid input!" << endl;
            break;
        }
    }
    return 0;
}