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
    cout << "Array: " << endl;
    for (int i = 0; i < n; i++) {
        std::cout << i << ": " << arr[i] << endl;
    }
    for(;;) {
        std::cout << "Enter the element to search: ";
        std::cin >> x;
        pos = -1;
        for(int i = 0; i < n; i++) {
            if(arr[i] == x) {
                pos = i;
                break;
            }
        }
        if(pos != -1) {
            std::cout << "Element found at position: " << pos << endl;
        } else {
            std::cout << "Element not found." << endl;
        }
        std::cout << "Press 1 to exit 2 to continue: ";
        std::cin >> e;
        if (e == 1) {
            return 0;
        } else if(e == 2) {
            continue;
        } else {
            std::cout << "Invalid input. Exiting." << endl;
            break;
        }
    }
    return 0;
}