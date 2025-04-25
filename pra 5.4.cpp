#include <iostream>
using namespace std;

class Fahrenheit; // Forward declaration

class Celsius {
    float temp;
public:
    Celsius(float t = 0) { temp = t; }
    float getTemp() { return temp; }

    // Convert Celsius to Fahrenheit
    operator Fahrenheit();

    // Equality check
    bool operator==(Fahrenheit f);
};

class Fahrenheit {
    float temp;
public:
    Fahrenheit(float t = 0) { temp = t; }
    float getTemp() { return temp; }

    // Convert Fahrenheit to Celsius
    operator Celsius() {
        return Celsius((temp - 32) * 5 / 9);
    }

    // Equality check
    bool operator==(Celsius c) {
        return ((temp - 32) * 5 / 9) == c.getTemp();
    }
};

// Define conversion outside class
Celsius::operator Fahrenheit() {
    return Fahrenheit((temp * 9 / 5) + 32);
}

// Equality check from Celsius side
bool Celsius::operator==(Fahrenheit f) {
    return ((temp * 9 / 5) + 32) == f.getTemp();
}

int main() {
    Celsius c1(37);
    Fahrenheit f1 = c1;

    Fahrenheit f2(98.6);
    Celsius c2 = f2;

    if (c1 == f2)
        cout << "Temperatures are equal\n";
    else
        cout << "Temperatures are not equal\n";

    // Static array to store converted Fahrenheit objects
    Fahrenheit fArray[2];
    fArray[0] = f1;
    fArray[1] = Fahrenheit(100);

    for (int i = 0; i < 2; i++) {
        cout << fArray[i].getTemp() << " F\n";
    }

    return 0;
}