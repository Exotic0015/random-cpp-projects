#include <iostream>
#include <string>
#include "functions.hpp"

using namespace std;

int main() {
    string raw{};
    cout << "Enter a string: ";
    cin >> raw;

    cout << endl;

    cout << "Decimal: " << string_to_decimal(raw) << endl;
    cout << "Binary: " << string_to_binary(raw) << endl;
    cout << "Hex: " << string_to_hex(raw) << endl;
    cout << "Oct: " << string_to_oct(raw) << endl;

    return 0;
}