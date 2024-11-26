#include <iostream>
using namespace std;
int main()
{
	int asc;
	cin >> asc;
	if (('a' <= asc) && ('z' >= asc))
		cout << (char)(asc - 'a' + 'A') << endl;
	else
		cout << asc + 1 << endl;
	return 0;
}
