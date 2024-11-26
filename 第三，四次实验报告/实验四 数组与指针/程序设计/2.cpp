#include<iostream>
#include <string>
#include <cstring>
using namespace std;
int parseHex(const char* const hexString)
{
	int i = 0, L = 0,k,num1=0,num2=0;
	for (i = 0; hexString[i] != '\0'; i++)
	{
	}
	L = i;
	for (i = 0; i < L; i++)
	{
		if (hexString[i]-48 > 9)
		{
			num1 =int(hexString[i]) - 55;
			for (k = L - i; k > 1; k--)
			{
				num1 = num1*16;
			}
			num2 = num2 + num1;
		}
		else
		{
			num1 = hexString[i]-48;
			for (k = L - i; k > 1; k--)
			{
				num1 = num1 * 16;
			}
			num2 = num2 + num1;
		}
	}
	return num2;
}
int main()
{
	char hexString[1000] = "\0";
	cin.get(hexString,1000);
	cout<<parseHex(hexString);
	return 0;
}
