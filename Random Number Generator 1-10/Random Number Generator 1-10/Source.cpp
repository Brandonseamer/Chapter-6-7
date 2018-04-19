//Author: Brandon Seamer
//Date: 4/19/2018
//Program: Random Number Generator
#include<random>
#include<time.h>
#include<iostream>
int main()
{
	srand(time(0));
	int randomNumber = rand() % 10 + 1;
	std::cout << "Your random number is: " << randomNumber << ". \n";
	system("pause");
	return 0;
}