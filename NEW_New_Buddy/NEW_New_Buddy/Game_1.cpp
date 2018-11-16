#include"Functions.h"
#include"pch.h"
#include <cstdlib>
#include <ctime>

#include<iostream>

using namespace std;

int game_1()
{
	int randNumber = (rand() % 10) + 1;
	int number;
	int playAgain;
	std::cout << "A number will be randomly generated between 1 and 10\n\n";
	std::cout << "Your job is to guess that number\n\n";
	std::cout << "Exit = 0\n\n";
	std::cout << "Answer : ";
	cin >> number;
	cout << endl;

	if (number == 0)
	{
		exit(0);
	}

	(number == randNumber) ? cout << "Nice! You guessed it!\n\n" : cout << "Darn. You didn't guess it.\n\n";

	game_1();
}