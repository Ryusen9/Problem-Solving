#include <iostream>
using namespace std;

void decimalToBinary(int decimalNum){
    int n = decimalNum;
    int pow = 1;
    int binaryNum = 0;
    while(n > 0) {
        int rem = n % 2;
        binaryNum += rem * pow;
        n = n / 2;
        pow = pow * 10;
    }
    std::cout << "Binary number of " << decimalNum << " is = " << binaryNum << endl;
}
int main() {
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;
    decimalToBinary(n);
    return 0;
}