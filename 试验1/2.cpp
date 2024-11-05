#include<iostream>
using namespace std;
int main()
{
	double pi = 3.1415926, r, h;
	cout << "请输入半径:" << endl;
	cin >> r;
	cout << "请输入高度:" << endl;
	cin >> h;
	cout << "圆锥的体积为:" << pi * r * r * h / 3 << endl;
	return 0;
}