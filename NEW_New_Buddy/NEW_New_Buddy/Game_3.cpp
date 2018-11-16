#include"pch.h"
#include"Functions.h"

int game_3()
{
	int exit;
	int xValue;
	cout << "Enter how many spaces you would like to move right\n\n";
	cout << "answer = ";
	cin >> xValue;
	cout << endl << endl;

	while ((xValue - 1) > 0)
	{
		cout << " ";
	}

	cout << "|";

	cout << "Continue?\n\n";
	cout << "Yes = 1\n\n";
	cout << "No = 0\n\n";
	cout << "Answer = ";
	cin >> exit;
	cout << endl << endl;

	switch (exit)
	{
	default:
		game_3();

	case 1:
		game_3();

	case 0:
		return 0;
	}

}