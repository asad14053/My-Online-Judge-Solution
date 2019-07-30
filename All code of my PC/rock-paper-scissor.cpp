#include <iostream>
#include <ctime>
using namespace std;


void outputChoice(int c)
{
  switch(c)
  {
    case 1:
		cout << "Rock";
		break;
    case 2:
		cout << "Paper";
		break;
    case 3:
		cout << "Scissors";
		break;
	case 4:
		cout << "Lizard";
		break;
	case 5:
		cout << "Spock";
		break;
  }
}

//bool for determining if win or if draw -- loss will be elseif

bool isWin(int userChoice, int cpuChoice)
{
  bool result =
    (	(userChoice == 1 && cpuChoice == 3) ||
		(userChoice == 1 && cpuChoice == 4) ||
		(userChoice == 2 && cpuChoice == 1) ||
		(userChoice == 2 && cpuChoice == 5) ||
		(userChoice == 3 && cpuChoice == 2) ||
		(userChoice == 3 && cpuChoice == 4));
  return result;
}

bool isDraw(int userChoice, int cpuChoice)
{
  bool result =
		( (userChoice == cpuChoice));
  return result;
}

int main()
{
	do{

		srand(time(NULL));

		cout << "Welcome to Rock Paper Scissors Lizard Spock!" << endl;
		cout << "The rules are the same as traditional Rock Paper Scissors with the additions as follows: Lizard";
		cout << " beats Paper & Spock; Spock defeats Rock & Scissors.\n\n" << endl;
		cout << endl;

		{
			int userChoice;

				cout << "Please choose your move.  Select 1-5: \n\n";
				cout << "1) Rock" << endl;
				cout << "2) Paper" << endl;
				cout << "3) Scissors" << endl;
				cout << "4) Lizard" << endl;
				cout << "5) Spock\n\n" << endl;

				cin >> userChoice;

			if (!(userChoice >= 1 && userChoice <= 5))
			{
				cout << "Please choose 1, 2, 3, 4 or 5!" << endl;
			}

			else
			{
				int cpuChoice = rand() % 5 + 1;
	  			cout << "You chose... ";
				outputChoice(userChoice);
				cout << endl;

				cout << "The computer chose... ";
				outputChoice(cpuChoice);
				cout << endl;
				cout << endl;

				cout << "The result is..." << endl;
			}

			if (isWin(userChoice, cpuChoice))
			{
				cout << "You chose wisely!  WINNER!!!!!" << endl;
			}

			else if (isDraw(userChoice, cpuChoice))
			{
				cout << "You chose well, but so did I - TIE!" << endl;
			}

			else
			{
				cout << "You chose poorly!  You loose!" << endl;
			}

	}
	while (userChoice == cpuChoice);

	return 0;
}

