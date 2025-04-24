#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    ifstream inputFile("E:\\input.txt");
    if(!inputFile) {
        cerr << "Error opening file." << endl;
        return 1;
    }
    vector<int> numbers;
    int num;
    while(inputFile >> num) {
        numbers.push_back(num);
    }
    inputFile.close();
    cout << "Numbers read from file:" << endl;
    for(int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << endl;
    }
    return 0;
}