#include <iostream>
using namespace std;
int main()
{
	int a, b;
	b = 0;
	cin >> a;
	b = a % 7;
	switch (b)
	{
	case 0:
		cout << "������" << endl;
		break;
	case 1:
		cout << "����һ" << endl;
		break;
	case 2:
		cout << "���ڶ�" << endl;
		break;
	case 3:
		cout << "������" << endl;
		break;
	case 4:
		cout << "������" << endl;
		break;
	case 5:
		cout << "������" << endl;
		break;
	case 6:
		cout << "������" << endl;
		break;
	
	}


	return 0;

}