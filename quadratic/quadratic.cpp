#include <cmath>
#include <iomanip>
#include <iostream>
#include <fstream>

int main()
{
    double a, b, c;
    std::cout << "Type in a, b, and c. Press 'Enter' between each\n";
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cout << std::setprecision(4);
    // --- Your code here
    double delta=b*b-4*a*c;
    
    if (delta>0){
        double x1,x2;
        x1=(-b-sqrt(delta))/(2*a);
        x2=(-b+sqrt(delta))/(2*a);
        std::cout<<x1<<"\n"<<std::endl;
        std::cout<<x2<<"\n"<<std::endl;
    }
    else if (delta==0){
        double x;
        x=-b/2*a;
        std::cout<<x<<std::endl;

    }
    else{
        std::cout<<"None"<<std::endl;
    }



    // ---
    return 0;
}