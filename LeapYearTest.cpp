#include <iostream>
using namespace std;

int main() {
	int TestYear;

	cout << "Enter Year: "; //prompt user enter year
	cin >> TestYear; //except year input

	if (TestYear % 400 == 0) //years divisble by 400 are leap years
		cout << TestYear << " is a leap year!";
	else if (TestYear % 100 == 0) //years divisble by 100 but not 400 are not leap years
		cout << TestYear << " is not a leap year!";
	else if (TestYear % 4 == 0) //all years divisble by 4 are leap years
		cout << TestYear << " is a leap year!";
	else //all other years will never be leap years
		cout << TestYear << " is not a leap year!";
}
