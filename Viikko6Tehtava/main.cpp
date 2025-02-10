#include <iostream>
#include <vector>
#include <algorithm>
#include "student.h"

using namespace std;

int main()
{
    int selection = 0;
    vector<Student> studentList;

    do
    {
        cout << endl;
        cout << "Select" << endl;
        cout << "Add students = 0" << endl;
        cout << "Print all students = 1" << endl;
        cout << "Sort and print students according to Name = 2" << endl;
        cout << "Sort and print students according to Age = 3" << endl;
        cout << "Find and print student = 4" << endl;
        cin >> selection;

        switch (selection)
        {
        case 0: {
            string name;
            int age;
            cout << "Enter student name: ";
            cin >> name;
            cout << "Enter student age: ";
            cin >> age;
            studentList.push_back(Student(name, age));
            break;
        }
        case 1: {
            for (auto& student : studentList) {
                student.printStudentInfo();
            }
            break;
        }
        case 2: {
            sort(studentList.begin(), studentList.end(), [](Student& a, Student& b) {
                return a.getName() < b.getName();
            });
            for (auto& student : studentList) {
                student.printStudentInfo();
            }
            break;
        }
        case 3: {
            sort(studentList.begin(), studentList.end(), [](Student& a, Student& b) {
                return a.getAge() < b.getAge();
            });
            for (auto& student : studentList) {
                student.printStudentInfo();
            }
            break;
        }
        case 4: {
            string name;
            cout << "Student to be found name = ?" << endl;
            cin >> name;
            auto it = find_if(studentList.begin(), studentList.end(), [&name](Student& c) {
                return c.getName() == name;
            });
            if (it != studentList.end()) {
                cout << "Student found: " << endl;
                it->printStudentInfo();
            }
            else {
                cout << "Student not found" << endl;
            }
            break;
        }
        default:
            cout << "Wrong selection, stopping..." << endl;
            break;
        }
    } while (selection < 5);

    return 0;
}
