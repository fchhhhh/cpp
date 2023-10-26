#include <iostream>
using namespace std;
int main() {
	int c;
	cout << "200-300ÖÊÊýÎª:";
	for (int b = 200;b < 301;b++) {
		for (int a = 2;a < b;a++) {
			c = b % a;
			if (c == 0) {
				break;
			}
			if (a == b - 1) {
				cout << b << ' ';
			}
		}


	}

	return 0;
}