//Author: Brandon Seamer
//Date: 4/19/2018
//Program: Currency Conversions Selection

double canadianDollar = .9813;
double Euro = .757;
double indianRupee = 52.53;
double japaneseYen = 80.92;
double mexicanPeso = 13.1544;
double southAfricanRand = 7.7522;
double britishPound = .6178;

double currency;
#include <iostream>
#include <string>
std::string currencyConvert;
int main()
{
	std::cout << "How much money are you wanting to convert? >>> \n";
	std::cin >> currency;
	CurrencyConversion:
	std::cout << "What are you looking to convert to? (CanadianDollar, Euro, Rupee, Yen, Peso, Rand, Pound) \n";
	std::cin >> currencyConvert;
	if (currencyConvert == "CandianDollar")
		std::cout << "Your currency is worth: " << currency * canadianDollar << " canadian dollars. \n";
	else if(currencyConvert == "Euro")
		std::cout << "Your currency is worth: " << currency * Euro << " Euros. \n";
	else if (currencyConvert == "Rupee")
		std::cout << "Your currency is worth: " << currency * indianRupee << " Rupees. \n";
	else if (currencyConvert == "Yen")
		std::cout << "Your currency is worth: " << currency * japaneseYen << " Yen. \n";
	else if (currencyConvert == "Peso")
		std::cout << "Your currency is worth: " << currency * mexicanPeso << " Pesos. \n";
	else if (currencyConvert == "Rand")
		std::cout << "Your currency is worth: " << currency * southAfricanRand << " Rands. \n";
	else if (currencyConvert == "Pound")
		std::cout << "Your currency is worth: " << currency * britishPound << " Pounds. \n";
	else
	{
		goto CurrencyConversion;
	}
	system("pause");
	return 0;




}