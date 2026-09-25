#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double Fahrenheit;
    double Celsius;

    cout << "Enter the temperature in F˚: " << endl; //prompt temp to find F˚
    cin >> Fahrenheit; 

    cout << "Converting to C˚..." << endl;

    Celsius = (Fahrenheit- 32) * (5.0 / 9.0); //conversion formula

    cout << fixed << setprecision(2);
    cout << "In F˚is " << Fahrenheit << "F˚. " << "Celsius is " << Celsius << "C˚." << endl;

    return 0;

}
