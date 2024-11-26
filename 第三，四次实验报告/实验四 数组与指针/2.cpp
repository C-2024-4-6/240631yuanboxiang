#include <iostream>
using namespace std;
int main()
{
	int j = 0,listSize=0, i = 0;
	bool changed = true;
	double arr[10] = { 0 };
	cin >> listSize;
	for (;j<listSize;j++)
	{
		cin >> arr[j];
	}
	do
	{
		changed = false;
		for (j=0; j < listSize - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				double swap;
				swap = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = swap;
				changed = true;
			}
		}
		
	} while (changed);
		for (; i < listSize; i++)
		{
			cout << arr[i] << " ";
		}
	return 0;
}