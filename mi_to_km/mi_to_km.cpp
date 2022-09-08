// --- Your code here
#include <iostream>
#include <iomanip>

int main() {
    double input;
    std::cout << "Enter the distance in mi: ";
    std::cin >> input;
    double output;
    output=1.60934*input;
    std::cout<<std::setprecision(3)<<"The Distance in km is:"<<output<<std::endl;
}


// ---