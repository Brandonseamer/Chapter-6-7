//Author: Brandon Seamer
//Date: 4/19/2018
//Program: Computer Guessing Number Game
#include<random>
#include<time.h>
#include<iostream>
#include<string>
#include<Windows.h>
int main()
{
	int userInput;
	int rangeMax;
	int rangeMin;
	int compGuess;
	int attempts;
	int time;
	
	std::cout << "What is the maximum of your range? >>> \n";
	std::cin >> rangeMax;
	std::cout << "What is the minimum of your range? >>> \n";
	std::cin >> rangeMin;
	std::cout << "What number would you like me to guess? >>> \n";
	std::cin >> userInput;
guessAgain:
	srand(GetTickCount());
	time = GetTickCount();
	if (time == GetTickCount())
	goto guessAgain;
	compGuess = rand() % rangeMax + rangeMin;
	attempts++;

		std::cout << "I have taken " << attempts << " attempts so far. \n";
	if (userInput != compGuess)
		goto guessAgain;
	else
		std::cout << "Yay I win! \n";
	system("pause");
	return 0;
}