#include <iostream>
using namespace std;

void binaryToDecimal(int binNum) {
    int n = binNum;
    int decimalNum = 0;
    int pow = 1;
    while(n > 0) {
        int lastDigit  = n % 10;
        decimalNum += lastDigit * pow;
        pow = pow * 2;
        n = n/10;
    }
    cout << "Decimal number: " << decimalNum << endl;
}
int main() {
    int num;
    cout << "Enter a binary number: ";
    cin >> num;
    binaryToDecimal(num);
    return 0;
}