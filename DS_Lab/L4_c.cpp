#include <iostream>
#include <string>
using namespace std;
int main() {
    const int SIZE = 10;
    string arr[SIZE];
    cout << "Enter " << SIZE << " words:\n";
    for (int i = 0; i < SIZE; ++i)
        cin >> arr[i];
    for (int i = 0; i < SIZE - 1; ++i) {
        for (int j = 0; j < SIZE - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                string temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Words in dictionary order:\n";
    for (int i = 0; i < SIZE; ++i)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}