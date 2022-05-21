#include <iostream>
using namespace std;

int main() {
	int side1;
	int side2;
	int side3;

	cout << "Enter the three side lengths of a triangle to test if it is real: " << endl;
	cin >> side1;
	cin >> side2;
	cin >> side3;

	if (side1 < 0)
		cout << "Side lengths cannot be negative!" << endl;
	else if (side2 < 0)
		cout << "Side lengths cannot be negative!" << endl;
	else if (side3 < 0)
		cout << "Side lengths cannot be negative!" << endl;
	else if (side1 + side2 < side3)
		cout << "This triangle cannot be real!" << endl;
	else if (side2 + side3 < side1)
		cout << "This triangle cannot be real!" << endl;
	else if (side3 + side1 < side2)
		cout << "This triangle cannot be real!" << endl;
	else if (side1 + side2 == side3)
		cout << "This is a degenerate triangle" << endl;
	else if (side3 + side1 == side2)
		cout << "This is a degenerate triangle" << endl;
	else if (side2 + side3 == side1)
		cout << "This is a degenerate triangle" << endl;
	else
		cout << "This triangle is real." << endl;

	int TriLength1;
	int TriLength2;
	int TriLength3;

	cout << "If the triangle was not real or a degenerate, you may exit. If the triangle was determined to be real, enter the same values again to determine the type of real triangle: " << endl;
	cin >> TriLength1;
	cin >> TriLength2;
	cin >> TriLength3;

	if (TriLength1 == TriLength2 && TriLength2 == TriLength3)
		cout << "This is a real equilateral triangle.";
	else if (TriLength1 == TriLength2 || TriLength2 == TriLength3 || TriLength3 == TriLength1)
		cout << "This is a real isosceles triangle.";
	else
		cout << "This is a real scalene triangle.";
};
		