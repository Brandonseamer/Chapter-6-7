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
std::string characterName;
std::string reasonForDebt;
std::string winMessage;
std::string loseMessage;

double cash;

int stats[7];

int strength;
int agility;
int intelligence;
int charisma;
int luck;
int endurance;
int perception;



int rollCash()
{
	return 0;
}

int rollStats()
{
	srand(GetTickCount());
	for (int x = 6; x > -1; x--)
	{

		for (int n = 3; n > 0; n--)
		{
			stats[x] = stats[x] + rand() % 6 + 1;
		}
	}
	strength = stats[0];
	agility = stats[1];
	intelligence = stats[2];
	charisma = stats[3];
	luck = stats[4];
	endurance = stats[5];
	perception = stats[6];
	return 0;
}

int characterSetUp()
{
	return 0;
}

int main()
{
	rollStats();
	std::cout << "Strength: " << strength << ". \n";
	std::cout << "Agility: " << agility << ". \n";
	std::cout << "Intelligence: " << intelligence << ". \n";
	std::cout << "Charisma: " << charisma << ". \n";
	std::cout << "Luck: " << luck << ". \n";
	system("pause");
	return 0;
}