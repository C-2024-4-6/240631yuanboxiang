#include <iostream>
using namespace std;
int main()
{
	int n = 0, k = 0,p=0, arr[100 ]= { 0 };
	for (n = 0; n < 10; n++,k++)
	{
		cin >> arr[k];
		p = k-1;
		for (; p >= 0; p--)
		{
			if (arr[k] == arr[p])
				k--;
		}
	}
	for (int i = 0; i < k; i++)
	{
		cout << arr[i]<<" ";
	}
	return 0;
}