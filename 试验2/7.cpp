#include <iostream>
using namespace std;
int main()
{
	char a = '*';
	int i = 0, k = 0;
	for (i = 1; i <= 5; i++)
	{
		for (k = 1; k <= i; k++)
		{
			cout << char(a);
		}
		cout << endl;
	}
	return 0;
}