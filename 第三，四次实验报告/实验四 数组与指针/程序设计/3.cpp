#include<iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
	int n,i;
	cin >> n;
	int* arr = new int[n];
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int j = 0, listSize = n;
	bool changed = true;
	do
	{
		changed = false;
		for (j = 0; j < listSize - 1; j++)
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
	for (i = 0; i < n; i++)
	{
		cout << *(arr + i) << " ";
	}
	delete[] arr;
	return 0;
}
