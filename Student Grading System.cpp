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

	//Crash the program if the percentage score is greater than 100.00
	assert(PERCENTAGE_SCORE > 100.00);

	//Determine the letter grade
	if (PERCENTAGE_SCORE == 100.00 || PERCENTAGE_SCORE >= 80.00)
	{
		gradeLetter = 'A+';
	}
	else if (PERCENTAGE_SCORE == 79.00 || PERCENTAGE_SCORE >= 70.00)
	{
		gradeLetter = 'A';
	}
	else if (PERCENTAGE_SCORE == 69.00 || PERCENTAGE_SCORE >= 60.00)
	{
		gradeLetter = 'A-';
	}
	else if (PERCENTAGE_SCORE == 59.00 || PERCENTAGE_SCORE >= 50.00)
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
    
    return 0;
}
