#include "functions.hpp"
#include "gtest/gtest.h"

bool stringContainsTrailingSpace(const std::string& sourceString) {
    return sourceString.ends_with(' ');
}

TEST(StringToDecimalTest, DoesNotContainTrailingSpace) {
    ASSERT_FALSE(stringContainsTrailingSpace(text_converter::stringToDecimal("test")));
}

TEST(StringToDecimalTest, Correctness) {
    ASSERT_EQ(text_converter::stringToDecimal("jam"), "106 97 109");
    ASSERT_EQ(text_converter::stringToDecimal("subject"), "115 117 98 106 101 99 116");
    ASSERT_EQ(text_converter::stringToDecimal("contradiction"), "99 111 110 116 114 97 100 105 99 116 105 111 110");
}

TEST(StringToBinaryTest, DoesNotContainTrailingSpace) {
    ASSERT_FALSE(stringContainsTrailingSpace(text_converter::stringToBinary("test")));
}

TEST(StringToBinaryTest, Correctness) {
    ASSERT_EQ(text_converter::stringToBinary("jam"), "01101010 01100001 01101101");
    ASSERT_EQ(text_converter::stringToBinary("subject"), "01110011 01110101 01100010 01101010 01100101 01100011 01110100");
    ASSERT_EQ(text_converter::stringToBinary("contradiction"), "01100011 01101111 01101110 01110100 01110010 01100001 01100100 01101001 01100011 01110100 01101001 01101111 01101110");
}

TEST(StringToHexTest, DoesNotContainTrailingSpace) {
    ASSERT_FALSE(stringContainsTrailingSpace(text_converter::stringToHexadecimal("test")));
}

TEST(StringToHexTest, Correctness) {
    ASSERT_EQ(text_converter::stringToHexadecimal("jam"), "6a 61 6d");
    ASSERT_EQ(text_converter::stringToHexadecimal("subject"), "73 75 62 6a 65 63 74");
    ASSERT_EQ(text_converter::stringToHexadecimal("contradiction"), "63 6f 6e 74 72 61 64 69 63 74 69 6f 6e");
}

TEST(StringToOctTest, DoesNotContainTrailingSpace) {
    ASSERT_FALSE(stringContainsTrailingSpace(text_converter::stringToOctal("test")));
}

TEST(StringToOctTest, Correctness) {
    ASSERT_EQ(text_converter::stringToOctal("jam"), "152 141 155");
    ASSERT_EQ(text_converter::stringToOctal("subject"), "163 165 142 152 145 143 164");
    ASSERT_EQ(text_converter::stringToOctal("contradiction"), "143 157 156 164 162 141 144 151 143 164 151 157 156");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}