/*
Name:
Reg No:
Date:
Version
Description: c++ classes and object 
*/
#include <iostream>
#include <cmath>   
using namespace std;

class Cylinder
{
    public:
        float radius, height; 
    
        double calculate_vol() {
            return M_PI * radius * radius * height;  
        }
    
        double calculate_surfacearea() {
            return 2 * M_PI * radius * (radius + height);  
        }
};

int main() {
    // object 
    Cylinder cylinder1;
    float , volume;
    
    cylinder1.height = 100;
    cylinder1.radius = 20;
    
    volume = cylinder1.calculate_vol();                
    surfacearea = cylinder1.calculate_surfacearea();   
    
    cout << "The volume is " << volume << endl;
    cout << "The surface area is " << surfacearea << endl;
    
    return 0;
}
