#include <iostream>

class VelocityCalculator {
private:
    float velocity1;
    float velocity2; 

public:
    // Constructor
    VelocityCalculator(float v1, float v2) : velocity1(v1), velocity2(v2) {}
    double relativeVelocity() const {
        return velocity1 - velocity2;
    }

    void displayVelocities() const {
        std::cout << "Velocity of object 1: " << velocity1 << " m/s" << std::endl;
        std::cout << "Velocity of object 2: " << velocity2 << " m/s" << std::endl;
    }
};

int main() {
    float v1, v2;
    std::cout << "Enter the velocity of object 1 (in m/s): ";
    std::cin >> v1;
    std::cout << "Enter the velocity of object 2 (in m/s): ";
    std::cin >> v2;


    VelocityCalculator calc(v1, v2);
    calc.displayVelocities();


    std::cout << "Relative velocity of object 1 with respect to object 2: " 
              << calc.relativeVelocity() << " m/s" << std::endl;

    return 0;
}
