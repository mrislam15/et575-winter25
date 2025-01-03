/*
Full Name
Lab2, input and output streaming, string and character variables
Jan 2, 2025
*/

#include <iostream>
#include <string> // Required for the string type

using namespace std;

int main() {
    // Declare variables
    string country;
    char gender;

    // Prompt user for input
    cout << "Enter a country: ";
    cin >> country;

    cout << "Enter a gender (f for female, m for male, o for others): ";
    cin >> gender;

    // Display the entered information
    cout << "\nEntered country:\t" << country << endl;
    cout << "Selected gender:\t" << gender << endl;

    return 0;
}