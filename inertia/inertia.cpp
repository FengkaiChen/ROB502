#include <cmath>
#include <iostream>
#include <fstream>

int main()
{
    double mass, w, h, d;
    
    std::ifstream ifs("inertia_input.txt");
    ifs >> mass;
    ifs >> w;
    ifs >> h;
    ifs >> d;
    // you'll need to store the outputs in variables Ih, Iw, and Id.
    // --- Your code here
    double Ih,Iw,Id;
    Ih=1./12*mass*(w*w+d*d);
    Iw=1./12*mass*(h*h+d*d);
    Id=1./12*mass*(w*w+h*h);

    
    // ---
    std::cout << "<ixx>" << Ih << "</ixx>\n";
    std::cout << "<iyy>" << Iw << "</iyy>\n";
    std::cout << "<izz>" << Id << "</izz>\n";
    return 0;
}