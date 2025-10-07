#include <iostream>
using namespace std;
int main() {
	int integer_value;
	cout << "Enter an integer value: ";
	cin >> integer_value;
	if (integer_value == 0) {
		cout << "The number is zero.\n";
	}
	else {
		if (integer_value > 0) {
			if (integer_value % 2 == 0) {
				cout << "The number is positive and even\n";
			}
			else { cout << "The number is positive and odd\n"; }
		}
		else if (integer_value < 0) {
			if (integer_value % 2 == 0) {
				cout << "The number is negative and even\n";
			}
			else {
				cout << "The number is negative and odd\n";
			}
		}
	}
	return 0;
}
