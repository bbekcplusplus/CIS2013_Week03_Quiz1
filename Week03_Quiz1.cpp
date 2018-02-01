#include <iostream>

using namespace std;

int main() {
	int number_first = 1;
	int number_second = 1;
	char action;
	char question;
	bool keep_running = true;

	while (keep_running) {
		// asking for input 
		cout << "Enter your first number =  " << endl;
		cin >> number_first;
		cout << "Enter your second number =  " << endl;
		cin >> number_second;
		// selecting wether to add, substract, multiply or divide
		cout << "What can we do for you? Please enter one of the following =  " << endl <<
			"+" << endl << "*" << endl;
		cin >> action;

		//code goes here
		if (action == '+') {
			cout << "Total Output =  ";
			cout << number_first + number_second << endl;
		}

		

		if (action == '*') {
			cout << "Total Output =  ";
			cout << number_first * number_second << endl;
		}

		
		// work of while loop for program to continue or not
		cout << "Do you want to do more? Enter y or n" << endl;
		cin >> question;
		if (question != 'y') { keep_running = false; }
	}
}