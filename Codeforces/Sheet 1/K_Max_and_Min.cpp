#include <iostream>
using namespace std;
int main() {
    long long a, b, c, maximum_value, minimum_value;
    cin >> a >> b >> c;
    maximum_value = max(max(a, b), c);
    minimum_value = min(min(a, b), c);
    cout << minimum_value << " " << maximum_value << endl;
    return 0;
}