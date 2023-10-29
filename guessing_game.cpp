#include <iostream>
#include <cstdlib>
#include <ctime>

bool check_perfect(int number) {
    int sum = 1;
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            if (i * i != number)
                sum = sum + i + number / i;
            else
                sum = sum + i;
        }
    }
    return sum == number && number != 1;
}

int main() {
    srand(time(0));
    int random_number = rand() % 100 + 1;
    int user_guess;
    bool perfect;

    std::cout << "Welcome to the Perfect Number Guessing Game!" << std::endl;
    std::cout << "I am thinking of a number between 1 and 100." << std::endl;

    do {
        std::cout << "Enter your guess: ";
        std::cin >> user_guess;

        if (user_guess < 1 || user_guess > 100) {
            std::cout << "Invalid guess. Please enter a number between 1 and 100." << std::endl;
        } else if (user_guess == random_number) {
            std::cout << "Congratulations! You guessed the correct number: " << random_number << "." << std::endl;
        } else {
            perfect = check_perfect(user_guess);
            if (perfect) {
                std::cout << "You guessed a perfect number: " << user_guess << "! Keep trying to guess the correct number: " << random_number << "." << std::endl;
            } else {
                std::cout << "You guessed a number: " << user_guess << ", but it's not a perfect number. Keep trying to guess the correct number: " << random_number << "." << std::endl;
            }
        }
    } while (user_guess != random_number);

    return 0;
}