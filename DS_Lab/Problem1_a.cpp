#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    int n;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;
    int arr[n];
    std::srand(time(NULL));
    for (int i = 0; i < n; i++) {
        arr[i] = std::rand() % 100;
    }
    std::cout << "Array elements: " << std::endl;
    for(int i = 0; i < n; i++) {
        std::cout << "Element " << i + 1 << ": " << arr[i] << std::endl;
    }
    return 0;
}