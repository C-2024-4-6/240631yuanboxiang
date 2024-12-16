#include <iostream>
using namespace std;
class cuboid
{
private:
	double length;
	double width;
	double height;
	double volume;
public:
	void input()
	{
		cout << "input the length,width and height pls." << endl;
		cin >> length >> width >> height;
	}
	double calculate()
	{
		volume = length * width * height;
		return volume;
	}
	void show(double volume)
	{
		cout << volume;
	}
};
int main()
{
	double volume;
	cuboid c1;
	c1.input();
	volume = c1.calculate();
	c1.show(volume);
	return 0;
}