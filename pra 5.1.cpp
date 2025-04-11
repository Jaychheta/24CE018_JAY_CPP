/*A software development team aimed to design a versatile utility that could perform basic arithmetic

operations while demonstrating the concept of function overloading. This effort resulted in a class-
based calculator system capable of handling various combinations of input types, such as integers and

floating-point numbers. The system includes multiple overloaded add functions, each tailored to
accept distinct input types and perform addition operations accordingly. This approach ensures the
calculator is adaptable and provides consistent functionality regardless of the input types.
The case revolves around testing and validating the versatility of this calculator. Participants are
expected to create instances of the calculator, invoke the appropriate overloaded functions for various
input scenarios, and store the resulting values for further analysis. To organize and display these
results, the system incorporates methods to sequentially process and present the outcomes.*/
#include<iostream>
using namespace std;

class calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    float add(int a, float b) {
        return a + b;
    }

    float add(float a, int b) {
        return a + b;
    }

    float add(float a, float b) {
        return a + b;
    }
};

int main() {
    calculator calc;

    int choice;
    cout << "Enter your choice\n";
    cout << "1. int + int\n";
    cout << "2. int + float\n";
    cout << "3. float + int\n";
    cout << "4. float + float\n";
    cin >> choice;

    float result;

    if (choice == 1) {
        int a, b;
        cout << "Enter your first number: ";
        cin >> a;
        cout << "Enter your second number: ";
        cin >> b;
        result = calc.add(a, b);
    }
    else if (choice == 2) {
        int a;
        float b;
        cout << "Enter your first number (int): ";
        cin >> a;
        cout << "Enter your second number (float): ";
        cin >> b;
        result = calc.add(a, b);
    }
    else if (choice == 3) {
        float a;
        int b;
        cout << "Enter your first number (float): ";
        cin >> a;
        cout << "Enter your second number (int): ";
        cin >> b;
        result = calc.add(a, b);
    }
    else if (choice == 4) {
        float a, b;
        cout << "Enter your first number (float): ";
        cin >> a;
        cout << "Enter your second number (float): ";
        cin >> b;
        result = calc.add(a, b);
    }

    cout << "The result is: " << result << endl;

    return 0;
}
