//Author: Brandon Seamer
//Date: 4/19/2018
//Program: Random Number Generator
#include<random>
#include<time.h>
#include<iostream>
int main()
{
	int userGuess;
	srand(time(0));
	int randomNumber = rand() % 50 + 1;
	guessAgain:
	std::cout << "Guess what the random number is (1-50) \n";
	std::cin >> userGuess;
	if (userGuess > randomNumber)
	{
		std::cout << "You guessed higher than the random number." << std::endl;
		goto guessAgain;
	}
	else if (userGuess < randomNumber)
	{
		std::cout << "You guessed lower than the random number." << std::endl;
		goto guessAgain;
	}
	else
		std::cout << "You guessed the number! Congratulations! Game Over. \n";
	system("pause");
	return 0;
}