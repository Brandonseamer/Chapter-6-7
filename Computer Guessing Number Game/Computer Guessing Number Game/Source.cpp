//Author: Brandon Seamer
//Date: 4/19/2018
//Program: Computer Guessing Number Game
#include<random>
#include<time.h>
#include<iostream>
#include<string>
int main()
{
	char userInput;
	int rangeMax;
	int rangeMin;
	int compGuess;
	int attempts;
	
	
	std::cout << "What is the maximum of your range? >>> \n";
	std::cin >> rangeMax;
	std::cout << "What is the minimum of your range? >>> \n";
	std::cin >> rangeMin;
guessAgain:
	srand(time(0));
	compGuess = rand() % rangeMax + rangeMin;
	std::cout << "Is " << compGuess << " your number? ('Y' or 'N') >>> \n";
	std::cin >> userInput;
	if (!(toupper(userInput) == 'Y'))
		goto guessAgain;
	else
		std::cout << "Yay I win! \n";
	system("pause");
	return 0;
}