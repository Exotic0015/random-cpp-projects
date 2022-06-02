#ifndef TEXT_CONVERTER_FUNCTIONS_HPP
#define TEXT_CONVERTER_FUNCTIONS_HPP

#include <string>
#include <bitset>
#include <iomanip>

std::string string_to_decimal(std::string &rawString) noexcept {
    std::string convertedString{};
    for (char v: rawString) {
        convertedString += std::to_string(v) + ' ';
    }
    return convertedString;
}

std::string string_to_binary(std::string &rawString) noexcept {
    std::string convertedString{};
    for (char v: rawString) {
        convertedString += std::bitset<8>(v).to_string() + ' ';
    }
    return convertedString;
}

std::string string_to_hex(std::string &rawString) noexcept {
    std::string convertedString{};
    for (char v: rawString) {
        std::stringstream stream{};
        stream << std::hex << (int) v;
        convertedString += stream.str() + ' ';
    }
    return convertedString;
}

std::string string_to_oct(std::string &rawString) noexcept {
    std::string convertedString{};
    for (char v: rawString) {
        std::stringstream stream{};
        stream << std::oct << (int) v;
        convertedString += stream.str() + ' ';
    }
    return convertedString;
}

#endif //TEXT_CONVERTER_FUNCTIONS_HPP
