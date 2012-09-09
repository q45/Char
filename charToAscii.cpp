#include <iostream>
#include <iomanip>

using namespace std;

void binary(int);

int main()
{
	bool run = true;
do {
	
	int number;
	int foo = 5;
	char character =  's';

	int myAscii = static_cast<int>(character);

	cout << "please enter a positive integer and type 01 to quit ";
	cin >> number;
	if(number == 01  || number <= 0) {
		cout << "You need to enter a number";
		run = false;
		cout << "Thanks for trying my converter " << endl;
		exit;
	} 
	
	cout << number << " converted to binary is: " << endl;
	binary(number);
	cout << endl;
		cout << "ASCII is: " << endl;
	cout << myAscii << endl;

		} while (run);


	

	return 0;
	
}

void binary(int number)
{
	int remainder;
	if(number <=1) {
		cout <<  number;
		return;
	}

	remainder = number % 2;
	binary(number >> 1);
	cout << number << endl;
	cout << remainder;

}