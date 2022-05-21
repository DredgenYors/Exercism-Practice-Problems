#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string str; //initializes variable of type string

	cout << "Enter any word: "; //prompts user to enter string
	cin >> str; //except string input

	reverse(str.begin(), str.end()); //reverses the characters of the string, reading from the beginning to the end of the input

	cout << "Your new word is: " << str; //output new reversed string
}

