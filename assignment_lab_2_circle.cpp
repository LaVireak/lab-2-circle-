// Accept the radius of a circle and print the area and circumference
#include <iostream> // This is the directive for input and output
#include <cmath> //  allow to use math feature
using namespace std; // use standard namespace
int main() // main function 
{ // to open the main function block
    float r,area,circumference; // r for radius
    cout<<"Enter radius "; // Ask the user to enter the radius
    cin>>r; // Accept the radius
    area = M_PI * r * r; // Formula of area of the circle 
    circumference = 2 * M_PI * r; // Formula of circumference of the circle 
    cout<<"\nThe area of the circle is "<<area; // tell us the area of the circle
    cout<<"\nThe circumference of the circle is "<<circumference; // tell us the circumference of the circle 
    return 0; //  return 0 to the console   
} // to close the main function block