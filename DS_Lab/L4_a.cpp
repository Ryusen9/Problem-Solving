#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    const int SIZE = 10;
    int arr[SIZE];
    srand(time(0));
    for (int i = 0; i < SIZE; ++i)
        arr[i] = rand() % 100;

    cout << "Unsorted array:\n";
    for (int i = 0; i < SIZE; ++i)
        cout << arr[i] << " ";
    cout << endl;
    for (int i = 0; i < SIZE - 1; ++i) {
        for (int j = 0; j < SIZE - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Sorted array:\n";
    for (int i = 0; i < SIZE; ++i)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}