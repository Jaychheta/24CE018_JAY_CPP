#include <iostream>
#include <vector>
using namespace std;

class Employee {
    string name;
    int age;
    float basic, bonus;

    // Inline function to calculate total salary
    inline float totalSalary() {
        return basic + bonus;
    }

public:
    // Constructor with default bonus
    Employee(string n, int a, float b, float bon = 10000) {
        name = n;
        age = a;
        basic = b;
        bonus = bon;
    }

    // Function to show employee details
    void showData() {
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
        cout << "\nBasic Salary: " << basic;
        cout << "\nBonus: " << bonus;
        cout << "\nTotal Salary: " << totalSalary();
    }
};

int main() {
    vector<Employee> empList;
    char ch = 'y';

    while (ch == 'y' || ch == 'Y') {
        string name;
        int age;
        float basic, bonus;
        char customBonus;

        cout << "\nEnter Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter Age: ";
        cin >> age;

        cout << "Enter Basic Salary: ";
        cin >> basic;

        cout << "Do you want to enter custom bonus? (y/n): ";
        cin >> customBonus;

        if (customBonus == 'y' || customBonus == 'Y') {
            cout << "Enter Bonus Amount: ";
            cin >> bonus;
            empList.push_back(Employee(name, age, basic, bonus));
        } else {
            empList.push_back(Employee(name, age, basic)); // default bonus used
        }

        cout << "\nAdd another employee? (y/n): ";
        cin >> ch;
    }

    cout << "\n\n--- Employee Details ---";
    for (int i = 0; i < empList.size(); i++) {
        cout << "\n\nEmployee " << i + 1;
        empList[i].showData();
    }

    cout << "\n\nThank you!";
    return 0;
}
