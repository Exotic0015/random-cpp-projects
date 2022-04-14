#include <iostream>
#include <string>
#include <random>

using namespace std;

int main() {
    // An array that contains a blacklist of characters the generator should discard
    char blacklist[] = {
            ':',
            ';',
            '<',
            '>',
            '=',
            '?',
            '@',
            '[',
            '\\',
            ']',
            '^',
            '_',
            '`'
    };

    // Ask the user about the desired length of the phrase
    size_t count{};
    cout << "Character count: ";
    cin >> count;

    // Initialize a pseudorandom rng with a range between 48 ("0" in ASCII) and 122 ("z" in ASCII)
    random_device rng;
    default_random_engine engine(rng());
    uniform_int_distribution uniform(48, 122);

    // Initialize a passphrase string variable
    string random_phrase{};

    for (size_t i{}; i < count; i++) {
        // Generate a random character
        char random_char = (char) uniform(engine);

        // If the character is in the blacklist, decrement the iterator and start a new iteration
        if (find(begin(blacklist), end(blacklist), random_char) != end(blacklist)) {
            i--;
            continue;
        }

        // Append the character to the passphrase string
        random_phrase += random_char;
    }

    // Print out the generated phrase
    cout << random_phrase << endl;

    return 0;
}
