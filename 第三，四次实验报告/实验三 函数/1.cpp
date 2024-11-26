#include <iostream>
using namespace std;
int max(int x, int y)
{
	return x >= y ? x: y;
}
int min(int x, int y)
{
	return x < y ? x : y;
}
int num(int x, int y)
{
	if (x % y == 0)
	{
		return y;
	}
	else
	{
		return num(y, x % y);
	}
}
int main()
{
	int a, b;
	cin >> a >> b;
	cout<<"最大公约数为：" << num(max(a, b), min(a, b))<<endl;
	cout << "最小公倍数为：" << a * b / num(max(a, b), min(a, b))<<endl;
	return 0;
}