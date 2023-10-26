#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "请输入两个整数:";
        cin >> a >> b;

    if (a > b)
    {
        cout << a << "大于" << b << endl;
    }
    else if (a < b)
    {
        cout << a << "小于" << b << endl;
    }
    else
    {
        cout << a << "等于" << b << endl;
    }
    return 0;
}