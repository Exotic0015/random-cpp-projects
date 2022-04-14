#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 100; i++) {
        if (!(i % 3)) cout << "Fizz";
        if (!(i % 5)) cout << "Buzz";
        if ((i % 3) && (i % 5)) cout << i;
        cout << "\n";
    }

    return 0;
}