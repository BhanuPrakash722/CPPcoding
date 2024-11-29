#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

using namespace std;

void guessTheNumber() {

    srand(static_cast<unsigned int>(time(0)));


    int numberToGuess = rand() % 100 + 1;
    int userGuess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100. Can you guess it?" << endl;

    while (true) {
        cout << "Enter your guess: ";
        cin >> userGuess;


        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Your Enterend Invalid input! Please enter a number." << endl;
            continue;
        }

        attempts++;


        if (userGuess < numberToGuess) {
            cout << "Too low! Try again." << endl;
        } else if (userGuess > numberToGuess) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
            break;
        }
    }
}

int main() {
    guessTheNumber();
    return 0;
}

