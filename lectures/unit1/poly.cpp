// Directive to write this code to a file named poly.cpp in the unit1 directory

#include <iostream> // Include the input-output stream library
using namespace std; // Use the standard namespace

// Define the Shape class
class Shape {
public:
    // Virtual member function to draw a shape
    virtual void draw() {
        cout << "Drawing a shape." << endl;
    }
};

// Define the Circle class, which inherits from the Shape class
class Circle : public Shape {
public:
    // Override the draw function to draw a circle
    void draw() override {
        cout << "Drawing a circle." << endl;
    }
};

// Define the Square class, which inherits from the Shape class
class Square : public Shape {
public:
    // Override the draw function to draw a square
    void draw() override {
        cout << "Drawing a square." << endl;
    }
};

// Main function to demonstrate polymorphism with Shape, Circle, and Square classes
int main() {
    Shape* shapePtr; // Declare a pointer to Shape
    
    Circle circle; // Create a Circle object
    Square square; // Create a Square object
    
    shapePtr = &circle; // Point shapePtr to the Circle object
    shapePtr->draw(); // Call the draw function through the Shape pointer, outputs "Drawing a circle."
    
    shapePtr = &square; // Point shapePtr to the Square object
    shapePtr->draw(); // Call the draw function through the Shape pointer, outputs "Drawing a square."
    
    return 0; // Return 0 to indicate successful execution
}
