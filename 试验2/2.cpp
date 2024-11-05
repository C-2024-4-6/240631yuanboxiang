int main()
{
	double x = 0, y;
	cin >> x;
	if ((0 < x) && (x < 1))
		cout << "y=" << 3 - 2 * x << endl;
	else if ((1 <= x) && (x < 5))
		cout << "y=" << 0.5 / x + 1 << endl;
	else if ((5 <= x) && (x < 10))
		cout << "y=" << x * x << endl;
	return 0;
}
