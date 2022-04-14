#include <iostream>
#include <vector>

using namespace std;

int main() {
    string target;
    cout << "Enter a string: ";
    getline(cin, target);

    vector<char> already_checked;

    for (char v: target) {
        if (!count(already_checked.begin(), already_checked.end(), v)) {
            cout << "\"" << v << "\"" << ": " << count(target.begin(), target.end(), v) << endl;
            already_checked.push_back(v);
        }
    }

    return 0;
}