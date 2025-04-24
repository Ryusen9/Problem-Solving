#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>
using namespace std;
int main() {
    int n;
    std::cout << "Enter how many random numbers you want: ";
    std::cin >> n;
    vector<int> randomNumbersArray(n);

    srand(time(0));
    for (int i = 0; i < n; ++i) {
        randomNumbersArray[i] = rand() % 100;
    }
    std::cout << "Random Numbers Found: " << randomNumbersArray.size() << endl; 
    std::cout << "Random numbers:\n";
    for (int i = 0; i < n; ++i) {
        std::cout << randomNumbersArray[i] << endl;
    }
    return 0;
}