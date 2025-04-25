#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    vector<int> arr;
    srand(time(0));
    for(int i = 0; i < n; i++) {
        arr.push_back(rand() % 100 + 1);
    }
    int size = arr.size();
    std:: cout << "\nTraversing the Array:\n";
    for(int i = 0; i < size; i++) {
        std::cout << "Index " << i + 1 << ": " << arr[i] << endl;
    }
    std::cout << "\nTotal number of elements: " << size << endl;
    return 0;
}