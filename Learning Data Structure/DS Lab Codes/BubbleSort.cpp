#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int n, x;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    vector<int> arr;
    for(int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> x;
        arr.push_back(x);
    }
    int size = arr.size();
    std::cout << "Unsorted array: " << endl;
    for(int i = 0; i < size; i++) {
        std::cout << "Index " << i + 1 << ": " << arr[i] << endl;
    }
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                //  swap(arr[j], arr[j + 1]);
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    std::cout << "Sorted array (Bubble Sort): " << endl;
    for(int i = 0; i < size; i++) {
        std::cout << "Index " << i + 1 << ": " << arr[i] << endl;
    }
    return 0;
}