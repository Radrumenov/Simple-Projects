//Number Guesing game
#include <iostream>
#include <ctime>

using namespace std;

int GenerateNumber() {
    int a;
    a = rand() % (100 + 1 - 1) + 1;
    return a;
}

void GuesingNumber(int a) {
    int guess;
    int counter = 0;
    cout << "Guess the number 1-100: ";
    cin >> guess;
    counter++;
    
    while (guess < a || guess > a) {
        if (guess < a) {
            cout << "Too low!Try again: ";
            cin >> guess;
            counter++;
        }
        if (guess > a) {
            cout << "Too high!Try again: ";
            cin >> guess;
            counter++;
        }
    }
    if (guess == a) {
        cout << "Congratulations! You guessed the number in "<< counter << " guesses.\n\n";
        //cout << "Number of Gueses: " << counter;
    }
}

int main(int argc, char** argv)
{
    int Number;
    srand(time(NULL));
    Number = GenerateNumber();
    GuesingNumber(Number);
}
