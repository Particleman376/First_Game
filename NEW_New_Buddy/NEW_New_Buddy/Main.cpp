#include "pch.h"
#include"Functions.h"

using namespace std;

int main()
{
	int gameChoice;
	cout << endl;
	cout << "What would you like to play?\n\n";
	cout << "game 3 = 3\n\n";
	cout << "Algorithm Game = 2\n\n";
	cout << "Guessing game = 1\n\n";
	cout << "Quit = 0\n\n";
	cout << "Answer = ";
	cin >> gameChoice;
	cout << endl;

	switch (gameChoice)
	{
	default:
		return 0;

	case 1:
		game_1();

	case 2:
		game_2();

	case 3:
		game_3();

	case 0:
		return 0;
	}

}


