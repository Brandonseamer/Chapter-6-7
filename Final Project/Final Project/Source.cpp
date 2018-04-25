//Program: Final Project
//Date: 4/24/2018
//Authors: Brandon Seamer & ________

//Libraries
#include<iostream>
#include<string>
#include<cmath>
#include<random>
#include<Windows.h>
#include<time.h>
#include<fstream>

//ofstream is writing to a file
//ifstream is reading from a file

//Declare Global Variables
int stats[7];

std::string characterName; 

int strength;
int agility;
int intelligence;
int charisma;
int luck;
int endurance;
int perception;

void writeStats()
{
	std::ofstream stats("stats.txt", std::ios::beg);
	stats << "Strength: " << strength << ". \n";
	stats << "Perception: " << perception << ". \n";
	stats << "Endurance: " << endurance << ". \n";
	stats << "Charisma: " << charisma << ". \n";
	stats << "Intelligence: " << intelligence << ". \n";
	stats << "Agility: " << agility << ". \n";
	stats << "Luck: " << luck << ". \n";


	stats.close();
}
void readStats()
{
	std::cout << characterName << "'s stats are: \n";
	std::string line;
	std::ifstream stats("stats.txt", std::ios::beg);
	while (getline(stats, line))
	{
		std::cout << line << "\n";
	}
	stats.close();

}
int rollStats()
{
	int userInput;
	setup:
	srand(GetTickCount());
	int time = GetTickCount();
	if (time == GetTickCount())
		goto setup;
	for (int x = 6; x > -1; x--)
	{

		for (int n = 3; n > 0; n--)
		{
			stats[x] = stats[x] + rand() % 6 + 1;
		}
	}
	std::cout << "Your stat options are: 1 = " << stats[0] << "\n 2 = " << stats[1] << "\n 3 = " << stats[2] << "\n 4 = " << stats[3] << "\n 5 = " << stats[4] << "\n 6 = " << stats[5] << "\n 7 = " << stats[6];
	std::cout << "What would you like your strength to be? Option (1,2,3,4,5,6, or 7 from above) Dont select the same option twice. \n";
	std::cin >> userInput;
	strength = stats[userInput];
	std::cout << "What would you like your perception to be? Option (1,2,3,4,5,6, or 7 from above) Dont select the same option twice. \n";
	std::cin >> userInput;
	perception = stats[userInput];

	return 0;
}

int main()
{
	std::cout << "Welcome to Brandon's Adventure!! \n\n\nWhat is your adventurer's name? \n";
	std::cin >> characterName;
	rollStats();
	writeStats();
	readStats();

	system("pause");
	return 0;
}