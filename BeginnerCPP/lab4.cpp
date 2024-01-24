#include <iostream> // Allows us to get user input and print to the screen
#include <random> // Allows us to generate a 'random' number
using namespace std;

int main() {
    // Initialize variables for guesses
    int guessesLeft = 10;
    int guessNumber = 0;
    
    // randomNumber is a number between 1 and 100
    srand((unsigned) time(NULL));
    int randomNumber = 1 + rand() % 100;

    int userGuess = 0;
    
    // Loop until either:
    //   1. User's guess equals the random number
    //   2. User runs out of guesses
    while(userGuess != randomNumber && guessesLeft > 0)
    {
        cout << "You have " << guessesLeft << " guesses left. Enter your guess (1-100): ";
        cin >> userGuess;
        
        guessesLeft--;
        guessNumber++;
        
        // If the user's guess is too small
        if (userGuess < randomNumber)
        {  
            cout << "Sorry, your guess #" << guessNumber << "was too small" << endl;
        }
        // Else if the user's guess is too large
        else if (userGuess > randomNumber)
        {
            cout << "Sorry, your guess #" << guessNumber << "was too large" << endl;
        }
    }
    
    // If the user guessed the random number
    if (userGuess == randomNumber)
    {
        cout << "You got it, in " << guessNumber << " guesses!" << endl;
    }
    // Else if the user ran out of guesses
    else if (guessesLeft == 0)
    {
        cout << "You ran out of guesses." << endl;
    }
    
    return 0;
}
