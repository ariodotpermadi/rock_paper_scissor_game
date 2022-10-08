#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void showWinner(char player, char computer);

int main()
{
    char player;
    char computer;

    player = getUserChoice();
    std::cout << "Your choice: ";
    showChoice(player);

    computer = getComputerChoice();
    std::cout << "Computer's choice: ";
    showChoice(computer);

    showWinner(player, computer);
    return 0;
}

char getUserChoice()
{
    char player;
    std::cout << "*****************************\n";
    std::cout << "Rock-Paper-Scissor Game!\n";
    do
    {
        std::cout << "Choose one of the following\n";
        std::cout << "************************\n";
        std::cout << "'r' = Rock\n";
        std::cout << "'p' = paper\n";
        std::cout << "'s' = Scissor\n";
        std::cin >> player;
    } while (player != 'r' && player != 'p' && player != 's');

    return player;
}
char getComputerChoice()
{

    srand(time(0));
    int num = rand() % 3 + 1;

    switch (num)
    {
    case 1:
        return 'r';
    case 2:
        return 'p';
    case 3:
        return 's';
    }

    return 0;
}
void showChoice(char choice)
{
    switch (choice)
    {
    case 'r':
        std::cout << "Rock\n";
        break;
    case 'p':
        std::cout << "Paper\n";
        break;
    case 's':
        std::cout << "Scissors\n";
        break;
    }
}
void showWinner(char player, char computer)
{
    switch (player)
    {
    case 'r':
        if (computer == 'r')
        {
            std::cout << "It's a tie!\n";
        }
        else if (computer == 'p')
        {
            std::cout << "You lose!\n";
        }
        else
        {
            std::cout << "You win!\n";
        }
        break;

    case 'p':
        if (computer == 'r')
        {
            std::cout << "You win!\n";
        }
        else if (computer == 'p')
        {
            std::cout << "It's a tie!\n";
        }
        else
        {
            std::cout << "You lose!\n";
        }
        break;

    case 's':
        if (computer == 'r')
        {
            std::cout << "You lose!\n";
        }
        else if (computer == 'p')
        {
            std::cout << "You win!\n";
        }
        else
        {
            std::cout << "It's a tie\n";
        }
        break;
    }
}