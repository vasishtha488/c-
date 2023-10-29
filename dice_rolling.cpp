#include <iostream>
#include <ctime>
#include <cstdlib>

// Function to roll the dice
int rollDice() {
    return rand() % 6 + 1;
}

int main() {
    // Initialize random seed
    srand(time(0));

    // Roll the dice
    int dice1 = rollDice();
    int dice2 = rollDice();

    // Display the result
    std::cout << "You rolled: " << dice1 << " and " << dice2 << ".\n";

    return 0;
}