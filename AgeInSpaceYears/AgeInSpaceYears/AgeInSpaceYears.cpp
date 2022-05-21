#include <iostream>
#include <iomanip>
using namespace std;

int main() {

int age; //initialize variable of type integer

cout << "Enter an age in seconds: "; //prompts user to enter age in seconds
cin >> age; //excepts user input of age

cout << fixed << setprecision(2); //sets all double outputs to the hundredths place

double EarthAge = age / 31557600; //calculates earth age

cout << "Your age on Earth is: " << EarthAge << "." << endl; //outputs earth age

//following calculates ages on most other planets
double MercuryAge = EarthAge / 0.2408467;
double VenusAge = EarthAge / 0.61519726;
double MarsAge = EarthAge / 1.8808158;
double JupiterAge = EarthAge / 11.862615;
double SaturnAge = EarthAge / 29.447498;
double UranusAge = EarthAge / 84.016846;
double NeptuneAge = EarthAge / 164.79132;

//outputs ages on most other planets
cout << "Your age on Mercury is: " << MercuryAge << "." << endl;
cout << "Your age on Venus is: " << VenusAge << "." << endl;
cout << "Your age on Mars is: " << MarsAge << "." << endl;
cout << "Your age on Jupiter is: " << JupiterAge << "." << endl; 
cout << "Your age on Saturn is: " << SaturnAge << "." << endl;
cout << "Your age on Uranus is: " << UranusAge << "." << endl;
cout << "Your age on Neptune is: " << NeptuneAge << "." << endl;
}