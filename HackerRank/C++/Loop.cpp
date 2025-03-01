#include <iostream>
using namespace std;

string ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
string tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

string numberToOnes(int num) {
    if(num < 20) return ones[num];
    else if(num < 100) return tens[num/10] + (num % 10 == 0 ? "" : " " + ones[num % 10]);
    else if(num < 1000) return ones[num / 100] + " hundred" + (num % 100 == 0 ? "" : " "+ numberToOnes(num % 100));
    else if(num < 10000) return ones[num / 1000] + " thousand" + (num % 1000 == 0 ? "" : " "+ numberToOnes(num % 1000));
    else return "Number too large";
}
int main() {
    int A[2];
    for(int i = 0; i < 2; i++) {
        cin >> A[i];
    }
    for(int i = 0; i < 2; i++) {
        cout << numberToOnes(A[i]) << endl;
    }
    for(int i = 0; i < 2; i++) {
        if(A[i] % 2 == 0) {
            cout << "even\n";
        } else {
            cout << "odd\n";
        }
    }
}
