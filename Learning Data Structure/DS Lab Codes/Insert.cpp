#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>
using namespace std;

int main() {
    int n, pos, x, e;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    vector<int> arr;
    srand(time(0));
    for (int i = 0; i < n; i++) {
        arr.push_back(rand() % 100 + 1);
    }
    cout << "Array before insertion: " << endl;
    for (int i = 0; i < n; i++) {
        std::cout << i << ": " << arr[i] << endl;
    }
    for(;;) {
        std::cout << "Enter the position to insert the element: ";
        std::cin >> pos;
        std::cout << "Enter the element to insert: ";
        std::cin >> x;
        arr.insert(arr.begin() + pos, x);
        std::cout << "Array after insertion: " << endl;
        for (int i = 0; i < n + 1; i++) {
            std::cout << i << ": " << arr[i] << endl;
        }
        std::cout << "Press 1 to exit: ";
        std::cin >> e;
        if (e == 1) {
            return 0;
        }
    }
    return 0;
}