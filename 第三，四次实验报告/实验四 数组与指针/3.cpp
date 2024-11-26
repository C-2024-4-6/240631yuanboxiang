#include <iostream>
using namespace std;
int main()
{
	bool arr[101] = { false };
	int i = 0, j = 0;
	for (i = 1; i <= 100; i++)
	{
		for (j = i; j <= 100; j += i)
			arr[j] = !arr[j];
	}
	for (i = 1; i <= 100; i++)
	{
		if (arr[i] == true)
			cout << i << " ";
	}
	return 0;
}