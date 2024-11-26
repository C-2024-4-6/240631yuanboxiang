#include <iostream>
using namespace std;
int ep(int p)
{
	static int day=1;
	p = (p + 1) * 2;
		day++;
		if (day == 10)
			return p;
		return ep(p);
}
int main()
{
	int p;
	cin >> p;
	cout<<ep(p);
	return 0;
}