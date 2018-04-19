//Random Num Gen 4 Loop
//4/19/18
//Brandon Seamer

#include <iostream>
#include <random>
#include <time.h>

int main()
{
	int randomNumber;
	for (int n = 0; n < 10; n++)
	{
		srand(time(NULL));
		randomNumber = rand() % 6 + 1;
		
		std::cout << randomNumber << std::endl;
		_sleep(1000);
	}
	system("pause");
	return 0;
}

