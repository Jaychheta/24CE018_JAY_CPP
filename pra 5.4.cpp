#include <iostream>
using namespace std;

#define PI 3.14159265358979323846

// Abstract class
class Shape {
protected:
    double Area;

    virtual void Calculate_area() = 0; // Pure virtual function

    void Display() {
        cout << "\nArea: " << Area << " sq. units";
    }

public:
    virtual ~Shape() {}

    void ShowArea() {
        Display();
    }
};

// Rectangle class inherits Shape
class Rectangle : public Shape {
    double Length, Width;

    void Calculate_area() override {
        Area = Length * Width;
    }

public:
    Rectangle(double l, double w) {
        Length = l;
        Width = w;
        Calculate_area();
    }
};

// Circle class inherits Shape
class Circle : public Shape {
    double Radius;

    void Calculate_area() override {
        Area = PI * Radius * Radius;
    }

public:
    Circle(double r) {
        Radius = r;
        Calculate_area();
    }
};

int main() {
    int choice;
    double a, b;

    while (true) {
        cout << "\n\n--- Area Calculator ---";
        cout << "\n1. Circle";
        cout << "\n2. Rectangle";
        cout << "\n0. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter radius: ";
            cin >> a;
            Shape* shape = new Circle(a);
            shape->ShowArea();
            delete shape;
        } else if (choice == 2) {
            cout << "Enter length: ";
            cin >> a;
            cout << "Enter width: ";
            cin >> b;
            Shape* shape = new Rectangle(a, b);
            shape->ShowArea();
            delete shape;
        } else if (choice == 0) {
            cout << "Exiting program...\n";
            break;
        } else {
            cout << "Invalid choice! Try again.\n";
        }
    }

    return 0;
}
