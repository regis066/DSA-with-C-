#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

string getRandomWord() {
    vector<string> words = {"computer", "programming", "language", "challenge", "knowledge", "solution"};
    int randomIndex = rand() % words.size();
    return words[randomIndex];
}

int main() {
    srand(time(0)); // Initialize the random number generator
    string wordToGuess = getRandomWord();
    int wordLength = wordToGuess.length();
    string guessedWord(wordLength, '_'); // Initialize guessedWord with underscores
    int attempts = 7; // Number of attempts allowed
    vector<char> guessedLetters; // Store guessed letters

    cout << "Welcome to the Word Guessing Game!" << endl;

    while (attempts > 0 && guessedWord != wordToGuess) {
        cout << "Attempts left: " << attempts << endl;
        cout << "Guessed letters: ";
        for (char letter : guessedLetters) {
            cout << letter << " ";
        }
        cout << endl;
        cout << "Guess the word: " << guessedWord << endl;

        char guess;
        cout << "Enter a letter: ";
        cin >> guess;

        if (find(guessedLetters.begin(), guessedLetters.end(), guess) != guessedLetters.end()) {
            cout << "You already guessed that letter." << endl;
            continue;
        }

        guessedLetters.push_back(guess);

        bool letterGuessed = false;
        for (int i = 0; i < wordLength; i++) {
            if (wordToGuess[i] == guess && guessedWord[i] == '_') {
                guessedWord[i] = guess;
                letterGuessed = true;
            }
        }

        if (!letterGuessed) {
            cout << "Incorrect guess!" << endl;
            attempts--;
        }
    }

    if (guessedWord == wordToGuess) {
        cout << "Congratulations! You guessed the word: " << wordToGuess << endl;
    } else {
        cout << "Sorry, you're out of attempts. The word was: " << wordToGuess << endl;
    }

    return 0;
}

