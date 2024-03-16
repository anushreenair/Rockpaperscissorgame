#include <iostream>

using namespace std;

int main() {
    // Define choices
    const int ROCK = 1;
    const int PAPER = 2;
    const int SCISSORS = 3;

    int player1Choice, player2Choice;

    cout << "Let's play Rock, Paper, Scissors!\n";

    // Get player 1's choice
    cout << "Player 1, enter your choice (1 for Rock, 2 for Paper, 3 for Scissors): ";
    cin >> player1Choice;

    // Validate player 1's input
    if (player1Choice < ROCK || player1Choice > SCISSORS) {
        cout << "Invalid choice for Player 1. Please enter 1 for Rock, 2 for Paper, or 3 for Scissors.\n";
        return 1;
    }

    // Get player 2's choice
    cout << "Player 2, enter your choice (1 for Rock, 2 for Paper, 3 for Scissors): ";
    cin >> player2Choice;

    // Validate player 2's input
    if (player2Choice < ROCK || player2Choice > SCISSORS) {
        cout << "Invalid choice for Player 2. Please enter 1 for Rock, 2 for Paper, or 3 for Scissors.\n";
        return 1;
    }

    // Display choices
    cout << "Player 1 chose: ";
    switch (player1Choice) {
        case ROCK:
            cout << "Rock\n";
            break;
        case PAPER:
            cout << "Paper\n";
            break;
        case SCISSORS:
            cout << "Scissors\n";
            break;
    }

    cout << "Player 2 chose: ";
    switch (player2Choice) {
        case ROCK:
            cout << "Rock\n";
            break;
        case PAPER:
            cout << "Paper\n";
            break;
        case SCISSORS:
            cout << "Scissors\n";
            break;
    }

    // Determine the winner
    if (player1Choice == player2Choice) {
        cout << "It's a tie!\n";
    } else if ((player1Choice == ROCK && player2Choice == SCISSORS) ||
               (player1Choice == PAPER && player2Choice == ROCK) ||
               (player1Choice == SCISSORS && player2Choice == PAPER)) {
        cout << "Player 1 wins!\n";
    } else {
        cout << "Player 2 wins!\n";
    }

    return 0;
}
