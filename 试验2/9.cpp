#include <iostream>
using namespace std;
int main()
{
	double apple = 0.8;
	int day = 1, num = 2, num1 = 2;
	for (day = 1; num1 < 50; day++)
	{
		num = num * 2;
		num1 = num1 + num;
	}
	cout << (num1 * 0.8) / day;
	return 0;
}
