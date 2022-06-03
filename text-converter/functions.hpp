#ifndef TEXT_CONVERTER_FUNCTIONS_HPP
#define TEXT_CONVERTER_FUNCTIONS_HPP

#include <string>
#include <bitset>
#include <iomanip>

namespace text_converter {
    std::string stringToDecimal(const std::string &rawString) noexcept {
        std::string convertedString{};
        for (char v: rawString) {
            convertedString += std::to_string(v) + ' ';
        }
        convertedString.pop_back(); // Remove the trailing space
        return convertedString;
    }

    std::string stringToBinary(const std::string &rawString) noexcept {
        std::string convertedString{};
        for (char v: rawString) {
            convertedString += std::bitset<8>(v).to_string() + ' ';
        }
        convertedString.pop_back(); // Remove the trailing space
        return convertedString;
    }

    std::string stringToHexadecimal(const std::string &rawString) noexcept {
        std::string convertedString{};
        for (char v: rawString) {
            std::stringstream stream{};
            stream << std::hex << (int) v;
            convertedString += stream.str() + ' ';
        }
        convertedString.pop_back(); // Remove the trailing space
        return convertedString;
    }

    std::string stringToOctal(const std::string &rawString) noexcept {
        std::string convertedString{};
        for (char v: rawString) {
            std::stringstream stream{};
            stream << std::oct << (int) v;
            convertedString += stream.str() + ' ';
        }
        convertedString.pop_back(); // Remove the trailing space
        return convertedString;
    }
}

#endif //TEXT_CONVERTER_FUNCTIONS_HPP
