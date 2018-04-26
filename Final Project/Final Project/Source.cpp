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
void readStory()
{
	std::string line;
	std::ifstream story("Story.txt", std::ios::beg);
	while (getline(story, line))
	{
		std::cout << line << "\n";
	}
	story.close();
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
	std::cout << "Your stat options are:\n 1 = " << stats[0] << "\n 2 = " << stats[1] << "\n 3 = " << stats[2] << "\n 4 = " << stats[3] << "\n 5 = " << stats[4] << "\n 6 = " << stats[5] << "\n 7 = " << stats[6] << std::endl;
	std::cout << "What would you like your strength to be? Option (1,2,3,4,5,6, or 7 from above) Dont select the same option twice. \n";
	std::cin >> userInput;
	strength = stats[userInput-1];
	std::cout << "What would you like your perception to be? Option (1,2,3,4,5,6, or 7 from above) Dont select the same option twice. \n";
	std::cin >> userInput;
	perception = stats[userInput-1];
	std::cout << "What would you like your endurance to be? Option (1,2,3,4,5,6, or 7 from above) Dont select the same option twice. \n";
	std::cin >> userInput;
	endurance = stats[userInput-1];
	std::cout << "What would you like your charisma to be? Option (1,2,3,4,5,6, or 7 from above) Dont select the same option twice. \n";
	std::cin >> userInput;
	charisma = stats[userInput-1];
	std::cout << "What would you like your intelligence to be? Option (1,2,3,4,5,6, or 7 from above) Dont select the same option twice. \n";
	std::cin >> userInput;
	intelligence = stats[userInput-1];
	std::cout << "What would you like your agility to be? Option (1,2,3,4,5,6, or 7 from above) Dont select the same option twice. \n";
	std::cin >> userInput;
	agility = stats[userInput-1];
	std::cout << "What would you like your luck to be? Option (1,2,3,4,5,6, or 7 from above) Dont select the same option twice. \n";
	std::cin >> userInput;
	luck = stats[userInput-1];




	return 0;
}

int main()
{
	int userChoice;
	std::cout << "Welcome to Brandon's Adventure!! \n\nWhat is your adventurer's name? \n";
	std::cin >> characterName;
	rollStats();
	writeStats();
	readStats();
	readStory();
	std::cin >> userChoice;
	if (userChoice == 1 && strength > 11)
		std::cout << "You managed to slay the bandits and rescue the princess! Congratulations!" << std::endl;
	else if (userChoice == 1 && strength <= 11)
		std::cout << "You're so weak! Why would you ever think you could defeat them with strength? You were slaid by the bandit's guard rabbit. \n" << std::endl;
	else if (userChoice == 2 && perception > 11)
		std::cout << "Your keen eye sight allowed you to hit the target dead on. With the leader down, you manage to rescue the princess. \n";
	else if (userChoice == 2 && perception <= 11)
		std::cout << "You're as keen as a blind bat! You can't possibly hit the target dead on. You accidently shot the princess! \n";
	else if (userChoice == 3 && endurance > 11)
		std::cout << "With so much muscle, you manage to defend the princess from the thieves while walking her out, without even lifting a finger. \n";
	else if (userChoice == 4 && endurance <= 11)
		std::cout << "You're so frail. After taking the first hit from the guard rabbit, you fell on your face and was licked to death. \n";
	else if (userChoice == 5 && charisma > 11)
		std::cout << "You managed to charm the thief leader into letting the princess go! But now he wants to get married. Better run! \n";
	else if (userChoice == 5 && charisma <= 11)
		std::cout << "You're as charming as Brosius. Good luck with that. He killed the princess to the thought of you charming him. \n";
	else if (userChoice == 6 && intelligence > 11)
		std::cout << "You tricked the thief leader into thinking you were his father, scolded him for trying to date at such a young age, and led the princess out. \n";
	else if (userChoice == 6 && intelligence <= 11)
		std::cout << "You couldn't even think of a trick to tell the thief! You were caught and executed. \n";
	else if (userChoice == 7 && luck > 18)
		std::cout << "You were so lucky they just let her out! \n";
	else if (userChoice == 7 && luck <= 18)
		std::cout << "You're an idiot! They just killed her! \n";
	else{}
	system("pause");
	return 0;
}