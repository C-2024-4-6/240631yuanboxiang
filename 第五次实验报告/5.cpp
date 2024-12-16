#include <iostream>
using namespace std;
class Point
{
private:
	double x;
	double y;
public:
	Point(int x, int y)
	{
		this->x = x;
		this->y = y;	
	}
	void setPoint()
	{
		int i, j;
		cout << "input i,j pls.\n";
		cin >> i >> j;
		x += i;
		y += j;
	}
	void display()
	{
		cout << "x:" << x << endl;
		cout << "y:" << y;
	}
};
int main()
{
	Point p1(60,80);
	p1.setPoint();
	p1.display();

	return 0;
}