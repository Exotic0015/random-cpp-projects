#include <iostream>
#include <string>
#include "functions.hpp"

using namespace std;

int main() {
    string rawString{};
    cout << "Enter a string: ";
    cin >> rawString;

    cout << endl;

    cout << "Decimal: " << text_converter::string_to_decimal(rawString) << endl;
    cout << "Binary: " << text_converter::string_to_binary(rawString) << endl;
    cout << "Hex: " << text_converter::string_to_hex(rawString) << endl;
    cout << "Oct: " << text_converter::string_to_oct(rawString) << endl;

    return 0;
}