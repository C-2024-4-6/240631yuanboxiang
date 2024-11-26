#include <iostream>
#include <string>
#include <cstring>
using namespace std;
void count(const char s[], int counts[])
{
	int i,k=0,L1=0;
	for (i = 0; s[i] != '\0'; i++)
	{
	};
	L1 = i;
	i = 0;
	for(k=0;k<26;k++)
	{
	for (i=0;i<L1;i++)
	{
		if ((int(s[i]) == 'a'+k) || (int(s[i]) == k+ 'A'))
		{
			counts[k]++;
		}
	}
	if (counts[k] != 0)
	{
		cout << char('a' + k)<<": " << counts[k]<< "times" << endl;
	}
	counts[k] = 0;
	}
}
int main()
{
	int i;
	int counts[26] = {0};
	char s[1000] ="\0";
	cin.get(s, 1000);
	count(s, counts);
	return 0;
}