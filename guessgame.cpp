#include <iostream> // Include the input-output stream library
#include <cmath>    // Include the math library (not used here, but included)

using namespace std;

int main() {
    const int magicNumber = 5; // Define the magic number to be guessed
    int guess; // Variable to store the user's guess

    // Prompt the user to guess the magic number
    cout << "Guess the magic number (0-20)= " << endl;

    // Start an infinite loop for guessing
    while (true) {
        cin >> guess; // Read the user's guess

        // Check if the guess is outside the valid range
        if (guess < 0 || guess > 20) {
            cout << "Please enter a number between 0 and 20." << endl; // Prompt user for valid input
        } 
        // Check if the guess is incorrect
        else if (guess != magicNumber) {
            cout << "Try again!" << endl; // Prompt user to try again
        } 
        // If the guess is correct
        else {
            cout << "Dadaa!😎 Congratulations! You guessed the magic number!" << endl; // Congratulate the user
            break; // Exit the loop
        }
    }
    return 0; // End of the program
}
