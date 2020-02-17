#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Ввведите ваш возраст: ";
	cin >> n;
	if (n < 1 || n > 100) {
		cout << "ERROR" << endl;
	} else if (n == 11 && n == 12 && n == 13 && n == 14) {
		cout << "Вам " << n << " лет" << endl;
	}
	else if (n % 10 < 5 && n % 10 > 1 && n != 12 && n != 13 && n != 14) {
		cout << "Вам " << n << " года" << endl;
	}
	else if (n % 10 == 1 && n != 11) {
		cout << "Вам " << n << " год" << endl;
	}
	else {
		cout << "Вам " << n << " лет" << endl;
	};
}