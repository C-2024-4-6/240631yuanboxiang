#include <iostream>
using namespace std;
int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	if ((a + b <= c) || (a + b <= c) || (a + b <= c))
		cout << "�ⲻ��������" << endl;
	else
	{
		cout << "�ܳ�Ϊ:" << a + b + c << endl;
		if ((a = b) || (a = c) || (c = b))
		{
			cout << "��������Ϊ����������" << endl;
		}
	}
	return 0;
}