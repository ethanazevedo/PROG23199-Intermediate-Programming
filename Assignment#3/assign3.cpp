/*
Author: Ethan Azevedo
Date: April 9th, 2026
Program: Assignment 3: Shapes
Purpose: 
    A program involving shapes.  
*/

#include <iostream>

using namespace std;

const double PI = 3.14159; //constant for pi, used in circle area calculation

// Do NOT modify the Shape class in any way!
class Shape {

	public:
		virtual void displayInfo(void) = 0;
		
		virtual double area(void) = 0;
		
		virtual ~Shape() {}
};

// PART 1: Creating Shapes

// 1. Create a Rectangle class. A Rectangle is a Shape.
// 
//    Required constructor:
//        Rectangle(double width, double height);
// 
//    Override displayInfo(). Sample expected output:
//        Rectangle: width = 4.00000, height = 5.00000
//        Area: 20.0000
// 
//    Override area(). Area of rectangle: width * height

class Rectangle : public Shape{ //inherit from shape

	public: //public members of rectangle
		double width;
		double height;

		Rectangle();  //overloaded constructors, defined later
    	Rectangle(double side); //overloaded constructors, defined later

		Rectangle(double width, double height){ //default constructor, takes width and height as arguments
			this->width = width;
			this->height = height;
		}

		void displayInfo(void) override{ //override displayInfo function to show rectangle information
			cout << "Rectangle: width = " << width << ", height = " << height << "\n";
			cout << "Area: " << area() << "\n";
		}

		double area(void) override{ //override area function to calculate area of rectangle
			return width * height;
		}

		
};

// 2. Create a Triangle class. A Triangle is a Shape.
// 
//    Required constructor:
//        Triangle(double base, double height);
// 
//    Override displayInfo(). Sample expected output:
//        Triangle: base = 3.00000, height = 4.00000
//        Area: 6.00000
// 
//    Override area(). Area of triangle: 0.5 * base * height

class Triangle : public Shape{ //inherit from shape

	public: //public members of triangle
		double base;
		double height;

		Triangle(double base, double height){ //constructor, takes base and height as arguments
			this->base = base;
			this->height = height;
		}

		void displayInfo(void) override { //override displayInfo function to show triangle information
			cout << "Triangle: base = " << base << ", height = " << height << "\n";
			cout << "Area: " << area() << "\n";
		}

		double area(void) override { //override area function to calculate area of triangle
			return 0.5 * base * height;
		}
};

// 3. Create a Circle class. A Circle is a Shape.
// 
//    Required constructor:
//        Circle(double radius);
// 
//    Override displayInfo(). Sample expected output:
//        Circle: radius = 4.00000
//        Area: 50.2654
// 
//    Override area(). Area of circle: pi * radius * radius
//	  Hint: Use value of 3.14159 for pi.
// 
//    Add a public function that returns the diameter:
//        double diameter();
//	  Hint: Diameter is twice the radius.

class Circle : public Shape{ //inherit from shape

	public: //public members of circle
		double radius; 

		Circle(double radius){ //constructor, takes radius as argument
			this->radius = radius;
		}

		void displayInfo(void) override{ //override displayInfo function to show circle information
			cout << "Circle: radius =" << radius << "\n";
			cout << "Area: " << area() << "\n";
		}

		double area(void) override{ //override area function to calculate area of circle
			return PI * radius * radius;
		}

		double diameter(void){ //function to calculate diameter of circle
			return radius*2;
		}

};

// PART 2: Subclassing a Subclass
// 
// Create a Square class. A Square is a Rectangle.
// 
//    Required constructor:
//        Square(double side);
// 
//    Override displayInfo(). Sample expected output:
//        Square: side = 5.00000
//        Area: 25.0000

class Square : public Rectangle{ //inherit from rectangle, which already inherits from shape

	public: //public members of square
		double side;
	
		Square(double side) : Rectangle(side, side){ //constructor, takes side length as argument, calls rectangle constructor with width and height equal to side length
			this->side = side;
		}

		void displayInfo(void) override { //override displayInfo function to show square information
			cout << "Square: side = " << side << "\n";
			cout << "Area: " << area() << "\n";
		}
};

// PART 3: Calling the Parent Function
//
// Create a SemiCircle class. A SemiCircle subclass of Circle.
// 
//    Required constructor:
//        SemiCircle(double radius);
// 
//    Override displayInfo(). Sample expected output:
//        Semi-Circle: radius = 4.00000
//        Area: 25.1327
// 
//    Override area(). Area of a semi-circle: circleArea / 2
//	  Required: Make use of the parent class' area() function for this calculation.

class SemiCircle : public Circle{ //inherit from circle, which already inherits from shape

	public: //public members of semicircle
		double radius;

		SemiCircle(double radius) : Circle(radius){ //constructor, takes radius as argument, calls circle constructor with radius
			this->radius = radius;
		}

		void displayInfo(void) override{ //override displayInfo function to show semicircle information
			cout << "Semi-Circle: radius = " << radius << "\n";
			cout << "Area: " << area() << "\n";
		}

		double area(void) override{ //override area function to calculate area of semicircle
			return Circle::area() / 2.0; //call parent class area function and divide by 2
		}
};

// PART 4: Function Overloading
// 
// Add overloaded constructors to Rectangle:
//     Rectangle();                    // width = height = 1.0
//     Rectangle(double side);         // behaves like a square

Rectangle::Rectangle() : Rectangle(1.0, 1.0) {} //default constructor, calls the main constructor with width and height of 1.0
Rectangle::Rectangle(double side) : Rectangle(side, side){} //constructor with one argument, calls the main constructor with width and height equal to the side length

// PART 5: Instantiating Shapes
// 
// In main(), complete the following tasks:
// 
// 1. Instantiate objects:
//     1 rectangle with arguments length and width
// 	   1 rectangle with a single argument
//     1 triangle
// 	   1 circle
//     1 square
//     1 semi-circle
// 
// 2. Store each object in:
// 	   Shape* shapes[6];
// 
// 3. For each shape in the shapes array, use displayInfo()
//    to show information about the object.
// 
// 4. Get and display the total, combined of area of the objects.
//    Hint: Loop to go through your array of shapes.

int main() {

	double total = 0; //variable to store total area of all shapes

	//instantiate shapes with appropriate arguments
	Rectangle rec1(5, 4); 
	Rectangle rec2(3);
	Triangle tri1(5, 7);
	Circle cir(7);
	Square squ(2);
	SemiCircle semicir(8);

	//store shapes in an array of shape pointers
	Shape* shapes[6];
	shapes[0] = &rec1;
	shapes[1] = &rec2;
	shapes[2] = &tri1;
	shapes[3] = &cir;
	shapes[4] = &squ;
	shapes[5] = &semicir;

	//loop through shapes array, display info for each shape and add area to total
	for(int i = 0; i < 6; i++){
		shapes[i]->displayInfo();
		total += shapes[i]->area();
	}
	//display total area of all shapes
	cout << "Total area: " << total << "\n";

	return 0;
}