#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	c = 1;
	
	cin >> a;

 while (a >0)
 {
		b = a % 10;
		a=a / 10;
		c += 1;
		cout << b ;
	};
	cout <<"\n" << "Î»Êý£º" << c << endl;

	
	return 0;

 }