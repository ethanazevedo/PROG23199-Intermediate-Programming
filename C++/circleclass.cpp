#include <iostream>
using namespace std;

#define PI 3.14159

//class that represents a circle
// -> circumference
// -> area

class Circle {
private:
    double radius; // the radius of the circle
public:
    Circle(double r) { // constructor that initializes the radius
        this->radius = r; // set the radius of the circle to the value passed in the constructor
    }

    Circle(int r) { // constructor that initializes the radius with an integer value
        this->radius = (double)r; // set the radius of the circle to the value passed in the constructor
    }

    double getCircumference() { // method to calculate the circumference of the circle
        return 2 * PI * radius; // C = 2 * pi * r
    }

    double getArea() { // method to calculate the area of the circle
        return PI * radius * radius; // A = pi * r^2
    }
};

int main() {
    Circle circle1(5); // create a circle with radius 5
    cout << "Circumference: " << circle1.getCircumference() << "\n"; // print the circumference of the circle
    cout << "Area: " << circle1.getArea() << "\n"; // print the area of the circle
    return 0; // return 0 to indicate that the program ended successfully.
}