#include <iostream>
#include <fstream>
using namespace std;

int main() {
    const int SIZE = 100;
    int arr[SIZE];
    int n = 0;

    ifstream inFile("input.txt");
    if (!inFile) {
        cerr << "Error opening file." << endl;
        return 1;
    }
    while (inFile >> arr[n] && n < SIZE) {
        n++;
    }
    inFile.close();
    std::cout << "Array elements: " << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << "Element " << i + 1 << ": " << arr[i] << std::endl;
    }
    std::cout << "Number of elements: " << n << std::endl;
    return 0;
}