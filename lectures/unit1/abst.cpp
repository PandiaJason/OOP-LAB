

#include <iostream> // Include the input-output stream library
using namespace std; // Use the standard namespace

// Define the AbstractShape class
class AbstractShape {
public:
    // Pure virtual function to draw a shape
    // This makes AbstractShape an abstract class
    virtual void draw() = 0; // = 0 indicates that this function is pure virtual
};

// Define the Rectangle class, which inherits from the AbstractShape class
class Rectangle : public AbstractShape {
public:
    // Override the pure virtual function to draw a rectangle
    void draw() override {
        cout << "Drawing a rectangle." << endl;
    }
};

// Main function to demonstrate the usage of the AbstractShape and Rectangle classes
int main() {
    Rectangle rect; // Create a Rectangle object
    rect.draw(); // Call the draw function, outputs "Drawing a rectangle."
    return 0; // Return 0 to indicate successful execution
}
