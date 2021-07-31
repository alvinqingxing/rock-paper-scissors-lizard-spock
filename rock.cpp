#include <iostream>
#include <stdlib.h>

int main()
{
	srand(time(NULL));
	int computer = rand() % 5 + 1;
	int user = 0;
	int rock = 1;
	int paper = 2;
	int scissors = 3;
	int lizard = 4;
	int spock = 5;
	std::cout << "Rock Paper Scissors Lizard Spock!\n";
	std::cout << "1) Rock\n";
	std::cout << "2) Paper\n";
	std::cout << "3) Scissors\n";
	std::cout << "4) Lizard\n";
	std::cout << "5) Spock\n";
	std::cin >> user;
	std::cout << "You chose: " << user << "\n";
	std::cout << "The computer chose: " << computer << "\n";
	if (user == rock && computer == scissors)
	{
		std::cout << "You Win!\n";
	}
	else if (user == scissors && computer == paper)
	{
		std::cout << "You Win!\n";
	}
	else if (user == paper && computer == rock)
	{
		std::cout << "You Win!\n";
	}
	else if (user == lizard && computer == spock)
	{
		std::cout << "You Win!\n";
	}
	else if (user == spock && computer == scissors)
	{
		std::cout << "You Win!\n";
	}
	else if (user == scissors && computer == lizard)
	{
		std::cout << "You Win!\n";
	}
	else if (user == lizard && computer == paper)
	{
		std::cout << "You Win!\n";
	}
	else if (user == paper && computer == spock)
	{
		std::cout << "You Win!\n";
	}
	else if (user == spock && computer == rock)
	{
		std::cout << "You Win!\n";
	}
	else if (user == rock && computer == lizard)
	{
		std::cout << "You Win!\n";
	}
	else if (user == computer)
	{
		std::cout << "Tie!\n";
	}
	else
	{
		std::cout << "You Lose!\n";
	}
}