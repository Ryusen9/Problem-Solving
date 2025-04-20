#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string a, b;
    std::cin >> a;
    std::cin >> b;
    std::cout << a.size() << " " << b.size() << endl;
    std::cout << a + b << endl;
    char temp;
    temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    std::cout << a << " " << b << endl;
    return 0;
}
