#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student {
    string firstName;
    int rollNumber;
    float cgpa;
};

vector<Student> students;

bool isRollUnique(int roll) {
    for (auto& s : students) {
        if (s.rollNumber == roll) return false;
    }
    return true;
}

void addStudent() {
    Student s;
    cout << "Enter First Name: ";
    cin >> s.firstName;
    cout << "Enter Roll Number: ";
    cin >> s.rollNumber;
    if (!isRollUnique(s.rollNumber)) {
        cout << "Roll number already exists.\n";
        return;
    }
    cout << "Enter CGPA: ";
    cin >> s.cgpa;
    students.push_back(s);
    cout << "Student added successfully.\n";
}

void findByRoll() {
    int roll;
    cout << "Enter Roll Number: ";
    cin >> roll;
    for (auto& s : students) {
        if (s.rollNumber == roll) {
            cout << "Name: " << s.firstName << ", Roll: " << s.rollNumber << ", CGPA: " << s.cgpa << endl;
            return;
        }
    }
    cout << "Student not found.\n";
}

void findByName() {
    string name;
    cout << "Enter First Name: ";
    cin >> name;
    bool found = false;
    for (auto& s : students) {
        if (s.firstName == name) {
            cout << "Name: " << s.firstName << ", Roll: " << s.rollNumber << ", CGPA: " << s.cgpa << endl;
            found = true;
        }
    }
    if (!found) cout << "No student found with that name.\n";
}

void deleteStudent() {
    int roll;
    cout << "Enter Roll Number: ";
    cin >> roll;
    for (int i = 0; i < students.size(); i++) {
        if (students[i].rollNumber == roll) {
            students.erase(students.begin() + i);
            cout << "Student deleted.\n";
            return;
        }
    }
    cout << "Student not found.\n";
}

void updateStudent() {
    int roll;
    cout << "Enter Roll Number to update: ";
    cin >> roll;
    for (auto& s : students) {
        if (s.rollNumber == roll) {
            int choice;
            cout << "1. Update Name\n2. Update Roll\n3. Update CGPA\nEnter your choice: ";
            cin >> choice;
            switch (choice) {
                case 1:
                    cout << "Enter new name: ";
                    cin >> s.firstName;
                    break;
                case 2: {
                    int newRoll;
                    cout << "Enter new roll number: ";
                    cin >> newRoll;
                    if (!isRollUnique(newRoll)) {
                        cout << "Roll number already exists.\n";
                        return;
                    }
                    s.rollNumber = newRoll;
                    break;
                }
                case 3:
                    cout << "Enter new CGPA: ";
                    cin >> s.cgpa;
                    break;
                default:
                    cout << "Invalid choice.\n";
            }
            cout << "Record updated.\n";
            return;
        }
    }
    cout << "Student not found.\n";
}

bool compareByName(Student a, Student b) {
    return a.firstName < b.firstName;
}

void displaySortedRecords() {
    if (students.empty()) {
        cout << "No records to display.\n";
        return;
    }
    vector<Student> temp = students;
    sort(temp.begin(), temp.end(), compareByName);
    for (auto& s : temp) {
        cout << "Name: " << s.firstName << ", Roll: " << s.rollNumber << ", CGPA: " << s.cgpa << endl;
    }
}

void countLowCGPA() {
    int count = 0;
    for (auto& s : students) {
        if (s.cgpa < 3.0) count++;
    }
    cout << "Number of students with CGPA less than 3.00: " << count << endl;
}

void countStudents() {
    cout << "Total number of students: " << students.size() << endl;
}

int main() {
    int choice;
    do {
        cout << "\n1. Add Student\n2. Find by Roll\n3. Find by Name\n4. Delete Student\n5. Update Student\n6. Display Sorted Records\n7. Count CGPA < 3.0\n8. Count of Students\n0. Exit\nEnter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: addStudent(); break;
            case 2: findByRoll(); break;
            case 3: findByName(); break;
            case 4: deleteStudent(); break;
            case 5: updateStudent(); break;
            case 6: displaySortedRecords(); break;
            case 7: countLowCGPA(); break;
            case 8: countStudents(); break;
            case 0: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 0);
    return 0;
}