// LIBRARIES FOR INPUT/OUTPUT STRINGS AND LIMITS
#include <iostream>
#include <string>
#include <limits>
using namespace std;

// MAIN FUNCTION
int main() {
    // STRING VARIABLES
    string firstString;
    string secondString;
    string combinedString;

    // TITLE
    cout << "String Input!" << endl;

    // LOOP FOR 3 STRINGS WITH USER INPUT
    for (int i = 1; i <= 3; ++i) {
        cout << "\nString #" << i << ":" << endl;

        // PROMPT FOR USER INPUT 1
        cout << "Enter First String: ";
        getline(cin, firstString);

        // PROMPT FOR USER INPUT 2
        cout << "Enter Secong String: ";
        getline(cin, secondString);

        // CONCATENATE STRINGS
        combinedString = firstString + " " + secondString;

        // OUTPUT THE RESULTING STRING
        cout << "Resulting String: " << combinedString << endl;
    }

    // CLOSING MESSAGE
    cout << "\n Program Ending!" << endl;

    return 0;
}