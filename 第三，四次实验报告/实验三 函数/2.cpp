#include <iostream>
#include <cmath>
using namespace std;
bool is_prime(int num)
{
	int n = 0;
	if (num == 2)
	{
		return true;
	}
	for (n=2; n <= sqrt(num); n++)
	{
		if (num % n == 0)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}
int main()
{
	int num = 0, count = 0;
	for(num=2;num<=200;num++)
	{ 
	if (is_prime(num))
	{
		cout << num << " ";
		count++;
	}
	if (count == 10)
	{
		cout << "\n";
		count = 0;
	}
	}
	return 0;
}