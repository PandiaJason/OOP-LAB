
#include <iostream>  // Required for std::cout
#include <string>    // Required for std::string

class Car {
public:
    std::string brand;   // Data member (attribute)
    std::string model;   // Data member (attribute)
    int year;            // Data member (attribute)

    void printDetails() {   // Member function (method)
        std::cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << std::endl;
    }
};

int main() {
    Car myCar;                // Creating an object of the Car class
    myCar.brand = "Toyota";   // Setting the brand of myCar
    myCar.model = "Corolla";  // Setting the model of myCar
    myCar.year = 2020;        // Setting the year of myCar
    myCar.printDetails();     // Calling the printDetails method
    
    Car myCar1;                // Creating an object of the Car class
    myCar1.brand = "Maruthi";   // Setting the brand of myCar
    myCar1.model = "SWIFT";  // Setting the model of myCar
    myCar1.year = 2024;        // Setting the year of myCar
    myCar1.printDetails();     // Calling the printDetails method

    return 0;
}
