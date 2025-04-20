#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

class Student{
    private:
        int age;
        std::string first_name;
        std::string last_name;
        int standard;
    public: 
        void set_age(int a) {
            age = a;
        }
        void set_first_name(string fn) {
            first_name = fn;
        }
        void set_last_name(string ln) {
            last_name = ln;
        }
        void set_standard(int s) {
            standard = s;
        }
        int get_age() {
            return age;
        }
        string get_first_name() {
            return first_name;
        }
        string get_last_name() {
            return last_name;
        }
        int get_standard() {
            return standard;
        }
        string to_string() {
            stringstream ss;
            std::cout << age << "," << first_name << "," << last_name << "," << standard << endl;
            return ss.str();
        }
};
int main() {
    Student student;
    int age, standard;
    string firstName, lastName;
    std::cin >> age;
    std::cin >> firstName;
    std::cin >> lastName;
    std::cin >> standard;
    student.set_age(age);
    student.set_first_name(firstName);
    student.set_last_name(lastName);
    student.set_standard(standard);
    std::cout << student.get_age() << endl;
    std::cout << student.get_last_name() << ", " << student.get_first_name() << endl;
    std::cout << student.get_standard() << endl;
    std::cout << " " << endl;
    std::cout << student.to_string();
    return 0;
}
