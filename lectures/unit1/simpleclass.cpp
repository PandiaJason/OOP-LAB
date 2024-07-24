

#include <iostream>
using namespace std;

class Car {
public:
    // Data members
    string brand;
    int year;
    
    // Member function
    void displayInfo() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

int main() {
    // Create an object of the Car class
    Car myCar;
    myCar.brand = "Toyota";
    myCar.year = 2022;
    myCar.displayInfo(); // Output: Brand: Toyota, Year: 2022
    return 0;
}
