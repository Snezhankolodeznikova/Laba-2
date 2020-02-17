#include <iostream>
using namespace std;

int main() {
	int a, d, s, b;
	cin >> a;
	d = a % 4;
	s = a % 400;
	b = a % 100;
	if (a < 1582 || a > 2200) {
		cout << "ERROR" << endl;
	}
	else if (d == 0 && b != 0 || s == 0) {
		cout << "LEAP" << endl;
	}
	else {
		cout << "NORMAL" << endl;
	}
}