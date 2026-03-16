#include <iostream>
#include <iomanip>
using std::cout;
using std::fixed;
using std::setprecision;

int main() {
    
    double distance = 5400;
    double speed = 220;
    double time;

    time = distance / speed;

    cout << "The time required to travel " << distance 
         << " miles at "  << speed 
         << " mph is " << fixed << setprecision(1) 
         << time << " hours.";    
         
    return 0;
    
}