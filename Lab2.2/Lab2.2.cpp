#include <iostream>
using namespace std;

int main() {
	char a;

	cin >> a;

	if (a >= 'A' && a <= 'Z') {

		cout << "CAPITAL" << endl;

	}
	else if (a >= 'a' && a <= 'z') {

		cout << "LOWERCASE" << endl;

	}
	else if (a >= '0' && a <= '9') {

		cout << "DIGIT" << endl;

	}
	else {

		cout << "NON-ALPHANUMERIC" << endl;

	}
}