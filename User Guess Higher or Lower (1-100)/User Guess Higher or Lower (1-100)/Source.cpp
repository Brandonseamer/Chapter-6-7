//Author: Brandon Seamer
//Date: 4/19/2018
//Program: Random Number Generator
#include<random>
#include<time.h>
#include<iostream>
int main()
{
	char userPlayAgain;
	int userGuess;
	int attempts;
	playAgain:
	for (int n = 5; n > 0; n--)
	{
		srand(time(0));
		int randomNumber = rand() % 100 + 1;
	guessAgain:
		attempts++;
		std::cout << "Attempt number: " << attempts << ". \n";
		std::cout << "Guess what the random number is (1-100) \n";
		std::cin >> userGuess;
		if (userGuess > randomNumber)
		{
			std::cout << "You guessed higher than the random number." << std::endl;
			goto guessAgain;
		}
		else if (userGuess < randomNumber)
		{
			std::cout << "You guessed lower than the random number. " << std::endl;
			goto guessAgain;
		}
		else
			std::cout << "You guessed the number! Congratulations! Game Over. \n \n";
		std::cout << "You have " << n-1 << " games remaining." << std::endl;
	}
	std::cout << "Would you like to play again? 'Y' or 'N' " << std::endl;
	std::cin >> userPlayAgain;
	attempts = 0;
	if (tolower(userPlayAgain) == 'y')
	goto playAgain;
	system("pause");
	return 0;
}