
#include <iostream> // Include the input-output stream library
using namespace std; // Use the standard namespace

// Define the Vehicle class
class Vehicle {
public:
    // Member function to start the vehicle
    void start() {
        cout << "Vehicle starting..." << endl;
    }

    void stop() {
        cout << "Vehicle stopped..." << endl;
    }
};

// Define the Car class, which inherits from the Vehicle class
class Car : public Vehicle {
public:
    // Member function to drive the car
    void drive() {
        cout << "Car is driving." << endl;
    }
};

// Main function to demonstrate the usage of the Vehicle and Car classes
int main() {
    Car myCar; // Create a Car object named myCar
    myCar.start(); // Call the inherited start method from the Vehicle class on the myCar object
    myCar.drive(); // Call the drive method from the Car class on the myCar object
    myCar.stop(); // Call the inherited stop method from the Vehicle class on the myCar object
    return 0; // Return 0 to indicate successful execution
}

