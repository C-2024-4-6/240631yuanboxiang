#include <iostream>
constexpr int MAXN = 1001;
using namespace std;
#include <cmath>
#include<iostream>
#include <cmath>
using namespace std;
double math(double x)
{
    double i = 1;
    while (true)
    {
        double j = (i + x / i) / 2;
        if (abs(j - i) < 0.0001)
            return j;
        i = j;
    }
}
int main()
{
    double a;
    cin >> a;
    cout << math(a) << endl;
    return 0;
}
