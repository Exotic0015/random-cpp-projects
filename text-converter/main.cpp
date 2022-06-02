#include <iostream>
#include <string>
#include "functions.hpp"

using namespace std;

int main() {
    string rawString{};
    cout << "Enter a string: ";
    cin >> rawString;

    cout << endl;

    cout << "Decimal: " << string_to_decimal(rawString) << endl;
    cout << "Binary: " << string_to_binary(rawString) << endl;
    cout << "Hex: " << string_to_hex(rawString) << endl;
    cout << "Oct: " << string_to_oct(rawString) << endl;

    return 0;
}