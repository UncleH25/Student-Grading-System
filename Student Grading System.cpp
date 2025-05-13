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
    
    return 0;
}
