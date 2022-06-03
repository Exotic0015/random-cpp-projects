#include <iostream>
#include <string>
#include "functions.hpp"

using namespace std;

int main() {
    string rawString{};
    cout << "Enter a string: ";
    cin >> rawString;

    cout << endl;

    cout << "Decimal: " << text_converter::stringToDecimal(rawString) << endl;
    cout << "Binary: " << text_converter::stringToBinary(rawString) << endl;
    cout << "Hex: " << text_converter::stringToHexadecimal(rawString) << endl;
    cout << "Oct: " << text_converter::stringToOctal(rawString) << endl;

    return 0;
}