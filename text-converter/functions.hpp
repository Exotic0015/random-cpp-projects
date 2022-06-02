#ifndef TEXT_CONVERTER_FUNCTIONS_HPP
#define TEXT_CONVERTER_FUNCTIONS_HPP

#include <string>
#include <bitset>
#include <iomanip>

std::string string_to_decimal(const std::string& rawString) noexcept {
    std::string convertedString{};
    for (char v: rawString) {
        convertedString += std::to_string(v) + ' ';
    }
    convertedString.pop_back(); // Remove the trailing space
    return convertedString;
}

std::string string_to_binary(const std::string& rawString) noexcept {
    std::string convertedString{};
    for (char v: rawString) {
        convertedString += std::bitset<8>(v).to_string() + ' ';
    }
    convertedString.pop_back(); // Remove the trailing space
    return convertedString;
}

std::string string_to_hex(const std::string& rawString) noexcept {
    std::string convertedString{};
    for (char v: rawString) {
        std::stringstream stream{};
        stream << std::hex << (int) v;
        convertedString += stream.str() + ' ';
    }
    convertedString.pop_back(); // Remove the trailing space
    return convertedString;
}

std::string string_to_oct(const std::string& rawString) noexcept {
    std::string convertedString{};
    for (char v: rawString) {
        std::stringstream stream{};
        stream << std::oct << (int) v;
        convertedString += stream.str() + ' ';
    }
    convertedString.pop_back(); // Remove the trailing space
    return convertedString;
}

#endif //TEXT_CONVERTER_FUNCTIONS_HPP
