//Program: Rock, Paper, Scissors
//Author: Brandon Seamer
//Date: 4/19/18

#include <iostream>
#include <random>
#include <time.h>

char computerChoice;
char userChoice;
int computerChoose()
{
	
	int randomNumber;
	srand(time(NULL));
	randomNumber = rand() % 3 + 1;
	switch (randomNumber)
	{
	case 1:
		computerChoice = 'R';
		break;
	case 2:
		computerChoice = 'S';
		break;
	case 3:
		computerChoice = 'P';
		break;
	default:
		break;
	}
	return 0;
}

int main()
{
	int ties, wins, losses;
	playAgain:
	computerChoose();
	std::cout << "What would you like to choose, 'R' (Rock), 'P' (Paper), or 'S' (Scissors). \n";
	std::cin >> userChoice;
	//UserWins
	if (userChoice == 'R' && computerChoice == 'S' || userChoice == 'S' && computerChoice == 'P' || userChoice == 'P' && computerChoice == 'R')
	{
		std::cout << "You win! \n";
		wins++;
	}
	else if (userChoice == 'R' && computerChoice == 'R' || userChoice == 'S' && computerChoice == 'S' || userChoice == 'P' && computerChoice == 'P')
	{
		std::cout << "You tie! \n";
		ties++;
	}
	else if (userChoice == 'S' && computerChoice == 'R' || userChoice == 'P' && computerChoice == 'S' || userChoice == 'R' && computerChoice == 'P')
	{
		std::cout << "You lose! \n";
		losses++;
	}
	std::cout << "I chose " << computerChoice << " and you chose " << userChoice << "! \n";
	std::cout << "Wins: " << wins << ". Ties: " << ties << ". Losses: " << losses << ". \n Would you like to play again? 'Y' or 'N'. \n";
	std::cin >> userChoice;
	if (toupper(userChoice) == 'Y')
		goto playAgain;
	
	system("pause");
	return 0;
	
	
}