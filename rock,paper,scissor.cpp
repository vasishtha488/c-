#include <iostream>
#include <cstdlib>
#include <ctime>

// Function to determine the winner of the game
std::string determineWinner(std::string userChoice, std::string computerChoice) {
    if (userChoice == computerChoice) {
        return "It's a tie!";
    }
    if (
        (userChoice == "rock" && computerChoice == "scissors") ||
        (userChoice == "paper" && computerChoice == "rock") ||
        (userChoice == "scissors" && computerChoice == "paper")
    ) {
        return "You win!";
    } else {
        return "You lose!";
    }
}

int main() {
    srand(time(0));

    std::string userChoice;
    std::string computerChoice;

    // Possible choices
    std::string choices[] = {"rock", "paper", "scissors"};

    while (true) {
        std::cout << "Enter your choice (rock/paper/scissors): ";
        std::cin >> userChoice;

        // Check if the user entered a valid choice
        bool isValid = false;
        for (int i = 0; i < 3; i++) {
            if (userChoice == choices[i]) {
                isValid = true;
                break;
            }
        }

        if (!isValid) {
            std::cout << "Invalid choice. Please try again.\n";
            continue;
        }

        // Computer's choice
        int randomIndex = rand() % 3;
        computerChoice = choices[randomIndex];

        std::cout << "You chose " << userChoice << ". Computer chose " << computerChoice << ".\n";

        std::string winner = determineWinner(userChoice, computerChoice);
        std::cout << winner << '\n';
    }

    return 0;
}