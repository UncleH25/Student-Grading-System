#include <iostream>
#include <iomanip>
#include <string>
#include <cassert>

using namespace std;

int main()
{
	//Variables
	string studentName;
	double PERCENTAGE_SCORE;
	char gradeLetter;

	//Input
	cout << "Enter the student's name: ";
	getline(cin, studentName);
	cout << "Enter the student's percentage score (0.0-100.00): ";
	cin >> PERCENTAGE_SCORE;

	// Crash the program if the percentage score is not between 0.00 and 100.00
	assert(PERCENTAGE_SCORE >= 0.00 && PERCENTAGE_SCORE <= 100.00);

	//Determine the letter grade
	if (PERCENTAGE_SCORE == 100.00 || PERCENTAGE_SCORE >= 70.00)
	{
		gradeLetter = 'A';
	}
	else if (PERCENTAGE_SCORE == 69.00 || PERCENTAGE_SCORE >= 50.00)
	{
		gradeLetter = 'B';
	}
	else if (PERCENTAGE_SCORE == 49.00 || PERCENTAGE_SCORE >= 40.00)
	{
		gradeLetter = 'C';
	}
	else if (PERCENTAGE_SCORE == 39.00 || PERCENTAGE_SCORE >= 33.00)
	{
		gradeLetter = 'D';
	}
	else if (PERCENTAGE_SCORE < 32.00)
	{
		gradeLetter = 'F';
	}
	else
	{
		cout << "Invalid percentage score. Please enter a value between 0.0 and 100.00." << endl;
	}

	//Switch statement to determine the letter grade
	switch (gradeLetter)
	{
		case 'A':
			cout << studentName << " has a grade of A." << endl;
			break;
		case 'B':
			cout << studentName << " has a grade of B." << endl;
			break;
		case 'C':
			cout << studentName << " has a grade of C." << endl;
			break;
		case 'D':
			cout << studentName << " has a grade of D." << endl;
			break;
		case 'F':
			cout << studentName << " has a grade of F." << endl;
			break;
		default:
			cout << "Invalid grade letter." << endl;
			break;
	}

    return 0;
}
