#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    double radius;
    const double PI = 3.141592653;
    double area;
    cin >> radius;
    area = PI * pow(radius, 2);
    cout << fixed << setprecision(9);
    cout << area << endl;
    return 0;
}