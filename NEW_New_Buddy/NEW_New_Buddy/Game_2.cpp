#include"Functions.h"
#include"pch.h"
#include<iostream>

using namespace std;

int game_2()
{
	int exit;
	int xMultiplier = (rand() % 5) + 1;
	int xAddative = (rand() % 5) + 1;
	int X = 0;
	int Y = 0;

	cout << endl;
	cout << "You will have to guess how X and Y relate to each other\n\n";
	cout << "Current X = " << X << endl << endl;
	cout << "Current Y = " << Y << endl << endl;
	cout << "New X = ";
	cin >> X;
	cout << endl;
	cout << "New Y = ";
	cin >> Y;
	cout << endl;

	(Y == xMultiplier * X + xAddative) ? cout << "Congratulations! You succeeded in guessing!\n\n" : cout << "I'm dissapointed in you. You failed.\n\n";

	cout << "Continue?\n\n";
	cout << "Yes = 1\n\n";
	cout << "No = 0\n\n";
	cout << "Answer = ";
	cin >> exit;
	cout << endl << endl;
	 
	switch (exit)
	{
	default:
		game_2();

	case 1:
		game_2();

	case 0:
		return 0;
	}


}