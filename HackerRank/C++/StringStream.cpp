#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

vector<int> ParseInts(string str) {
    vector<int> result;
    stringstream ss(str);
    int num;
    char skip;
    while (ss >> num) {
        result.push_back(num);
        if (ss.peek() == ',') {
            ss.ignore();
        }
    }
    return result;
}
int main() {
    string input;
    std::cin >> input;
    vector<int> numbers = ParseInts(input);
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << "\n";
    }
    return 0;
}