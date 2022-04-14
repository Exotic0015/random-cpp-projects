#include <iostream>
#include <random>

using namespace std;

int main() {
    random_device rng;
    default_random_engine engine(rng());
    uniform_int_distribution uniform(1, 3);

    while (true) {
        cout << "Rock Paper Scissors" << endl;
        cout << "\t1) Rock" << endl;
        cout << "\t2) Paper" << endl;
        cout << "\t3) Scissors" << endl;

        int choice{};
        cout << "Choose your move: ";
        cin >> choice;
        if (choice != 1 && choice != 2 && choice != 3) {
            cout << "Invalid selection" << endl;
            continue;
        }

        int random_num{(int) uniform(engine)};
        switch (random_num) {
            case 1:
                switch (choice) {
                    case 1:
                        cout << "Scissors, ";
                        break;
                    case 2:
                        cout << "Rock, ";
                        break;
                    case 3:
                        cout << "Paper, ";
                        break;
                    default:
                        break;
                }
                cout << "you won!" << endl;
                break;
            case 2:
                switch (choice) {
                    case 1:
                        cout << "Rock, ";
                        break;
                    case 2:
                        cout << "Paper, ";
                        break;
                    case 3:
                        cout << "Scissors, ";
                        break;
                    default:
                        break;
                }
                cout << "draw!" << endl;
                break;
            case 3:
                switch (choice) {
                    case 1:
                        cout << "Paper, ";
                        break;
                    case 2:
                        cout << "Scissors, ";
                        break;
                    case 3:
                        cout << "Rock, ";
                        break;
                    default:
                        break;
                }
                cout << "you lost!" << endl;
                break;
            default:
                break;
        }

        char again;
        cout << "Do you want to play again? (y/n): ";
        cin >> again;
        if (again == 'n') break;
    }

    return 0;
}