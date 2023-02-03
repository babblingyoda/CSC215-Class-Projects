// Nicholas Longstreet Random Professor Choice Assignment

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
using namespace std;

int main()
{
	int i = 0;
	while (i == 0)
	{
		//This is the array the random choice generator will choose from
		const char* professors[10] =
		{ "Singleton", "Peters", "Prater", "Boleman", "Habib", "Crusoe", "Slater", "Harmsen", "Moore", "Clark" };
		cout << "Guess What Professor You will have: " << endl;
		string guess;
		cin >> guess;
		srand(time(NULL));
		//chooses a random entry from the array stores it in the choice variable and then displays the outcome
		int choice = rand() % 10;
		string out = professors[choice];
		cout << "You will meet Professor " << out;
		//Checks if users guess is correct or not
		if (guess == out) {
			cout << "\nYou picked correctly";
			//Plays a beep on the PC speaker signifying the user guessed the correct professor and the tour is over
			Beep(523, 500);
		}
		else {
			cout << "\nYou did not pick correctly";
		}
		//Asks user if they want to continue or not
		cout << "\nDo you want to guess again?";
		string ans;
		cin >> ans;
		//If answer is Yes the program restarts, If answer is no the program terminates
		if (ans == "Yes") {
			i = 0;
			continue;
		}
		if (ans == "No") {
			i = 1;
			break;
		}
	}



}

