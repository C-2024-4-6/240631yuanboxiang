#include <iostream>
constexpr int MAXN = 1001;
using namespace std;
#include <cmath>
int max(int x, int y)
{
	int i = 0, k, n = 0, h = 0;
	int arr[MAXN] = { 0 };
	int arrx[MAXN] = { 0 };
	for (i = 1; i <= x; i++)
	{
		k = (x % i);
		if (k == 0)
		{
			arrx[n] = i;
			n++;
		}
	}
	int j = 0;
	int arry[MAXN] = { 0 };
	for (i = 1; i <= y; i++)
	{
		k = y % i;
		if (k == 0)
		{
			arry[j] = i;
			j++;
		}
	}
	for (n = 0; n < x; n++)
	{
		for (j = 0; j < y; j++)
		{
			if (arrx[n] == arry[j])
			{
				arr[h] = arrx[n];
				h++;
			}
		}
	}
	int z = 0, m = 0;
	for (m = 0; m < h; m++)
	{
		for (z = 0; z < h; z++)
			if (arr[z] <= arr[z + 1])
			{
				int a = arr[z];
				arr[z] = arr[z + 1];
				arr[z + 1] = arr[z];
			}
	}
	return arr[0];
}
int main()
{
	int a, b;
	cin >> a >> b;
	max(a, b);
	cout << "最大公约数是:" << max(a, b) << endl;
	cout << "最小公倍数是:" << a * b / max(a, b) << endl;
	return 0;
}
