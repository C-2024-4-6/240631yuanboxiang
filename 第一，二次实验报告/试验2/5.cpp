#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int zm = 0;
	int sz = 0;
	int kg = 0;
	int qt = 0;
	char ch;
	do
	{
		ch = getchar();
		if (ch == ' ')
			kg++;
		else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
			zm++;
		else if (ch >= '1' && ch <= '9')
			sz++;
		else if (ch != '\n')
			qt++;
	} while (ch != '\n');
	cout << zm << sz << kg << qt << endl;
}
