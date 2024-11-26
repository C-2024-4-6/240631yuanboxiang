#include "mytemperayure.h"
int main()
{
	double cel = 0, fah = 0;
	cin >> cel;
	for (; cel >= 31; cel--)
	{
		cout << cel << " ";
		cout<< celsius_to_fah(cel)<<endl;
	}
	cin >> fah;
	for (;fah>=30;fah--)
	{
		cout << fah << " ";
		cout << fahrenheit_to_cels(fah) <<endl;
	}
	return 0;
}
double celsius_to_fah(double cel)
{
		return 32 + 1.8 * cel;
}
double fahrenheit_to_cels(double fah)
{
	return(fah - 32) / 1.8;
}