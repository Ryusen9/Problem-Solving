#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    int years, month, days;
    cin >> n;
    years = round(n / 365);
    month = round((n % 365) / 30);
    days = round((n % 365) % 30);
    cout << years << " years" << endl << month << " months" << endl << days << " days" << endl;
    return 0;
}