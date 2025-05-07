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
        int minIndex = i;
        for (int j = i + 1; j < SIZE; ++j) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
    cout << "Sorted array:\n";
    for (int i = 0; i < SIZE; ++i)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}