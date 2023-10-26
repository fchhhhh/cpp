#include <iostream>
using namespace std;
int main() {
	int a, b;
	a = 0;
	while (a < 8) {
		b = 8 - a;
		for (int c = b;c> 0;c--) {
			cout << ' ';
		}
		for (int d =8- a;d < 8;d++) {
			cout << "*" << ' ';
		}
		b--;
		
		a++;
		cout << '\n';
	}
		
}