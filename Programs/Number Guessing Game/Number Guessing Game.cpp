#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int number, guess, attempts;
    char playAgain;

    srand(time(0));

    do {
        number = rand() % 100 + 1;
        attempts = 0;

        cout << "\n========== NUMBER GUESSING GAME ==========" << endl;
        cout << "I have selected a number between 1 and 100." << endl;
        cout << "Can you guess it?" << endl;

        while (true) {
            cout << "Enter your guess: ";
            cin >> guess;
            attempts++;

            if (guess > number) {
                cout << "Too high! Try again." << endl;
            }
            else if (guess < number) {
                cout << "Too low! Try again." << endl;
            }
            else {
                cout << "Correct! You guessed the number in " << attempts << " attempts." << endl;
                break;
            }
        }

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thank you for playing!" << endl;
    return 0;
}
