#include <iostream>
#include <string>

int main()
{
	int bookScanID = 0;
	std::string bookOwner;
	std::cout << "Book ID Number please enter here>>> " << std::endl;
	std::cin >> bookScanID;
	switch (bookScanID)
	{
	case 326063:
		bookOwner = "Seamer";
		break;
	case 277364:
		bookOwner = "Brosius";
		break;
	case 277343:
		bookOwner = "Aaron";
		break;
	case 277362:
		bookOwner = "Brady";
		break;
	case 277346:
		bookOwner = "Kane";
		break;
	default:
		bookOwner = "Invalid";
		break;
	}
	std::cout << bookOwner << std::endl;
	system("pause");
	return 0;

}