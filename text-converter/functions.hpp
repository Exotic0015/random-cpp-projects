#ifndef TEXT_CONVERTER_FUNCTIONS_HPP
#define TEXT_CONVERTER_FUNCTIONS_HPP

#include <string>
#include <bitset>
#include <iomanip>

using namespace std;

string string_to_decimal(string &raw) noexcept {
    string converted{};
    for (char v: raw) {
        converted += to_string(v) + " ";
    }
    return converted;
}

string string_to_binary(string &raw) noexcept {
    string converted{};
    for (char v: raw) {
        converted += bitset<8>(v).to_string() + " ";
    }
    return converted;
}

string string_to_hex(string &raw) noexcept {
    string converted{};
    for (char v: raw) {
        stringstream stream{};
        stream << hex << (int) v;
        converted += stream.str() + " ";
    }
    return converted;
}

string string_to_oct(string &raw) noexcept {
    string converted{};
    for (char v: raw) {
        stringstream stream{};
        stream << oct << (int) v;
        converted += stream.str() + " ";
    }
    return converted;
}

#endif //TEXT_CONVERTER_FUNCTIONS_HPP
