#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Person {
    int age;
    string first_name;
    string last_name;
    int standard;
};
int main() {
    Person p;
    std::cin >> p.age >> p.first_name >> p.last_name >> p.standard;
    cout << p.age << " " << p.first_name << " " << p.last_name << " " << p.standard << endl;
    return 0;
}
