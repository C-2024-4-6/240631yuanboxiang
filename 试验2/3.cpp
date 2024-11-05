#include <iostream>
using namespace std;
int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	if ((a + b <= c) || (a + b <= c) || (a + b <= c))
		cout << "这不是三角形" << endl;
	else
	{
		cout << "周长为:" << a + b + c << endl;
		if ((a = b) || (a = c) || (c = b))
		{
			cout << "此三角形为等腰三角形" << endl;
		}
	}
	return 0;
}