#include <iostream>
#include <string>
using namespace std;
#include <iomanip>

//asks for age
//asks for name
//asks for favorite number

int main() {

    string name1;
    int age;
    double favoriteNumber;

    cout << "Enter your age: "; // prompt the user for their age
    cin >> age;
    cin.ignore(); // ignore the newline character after entering age

    cout << "Enter your name: ";
    getline(cin, name1);

    cout << "Enter your favorite number: "; // prompt for fav number
    cin >> favoriteNumber;

    cout << fixed << setprecision(2); // set the favorite number to display 2 decimal places

    cout << "Hello, " << name1 << "! You are " << age << " years old." << " Favorite number is: " << setw(10) << favoriteNumber << endl;
    return 0;
}


