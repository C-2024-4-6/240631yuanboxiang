#include <iostream>
#include <iomanip> 
using namespace std;
int main() {
    double Fah,Cel;
    cout << "�����뻪���¶�: ";
    cin >> Fah;
    Cel = (Fah - 32) * 5.0 / 9.0;
    cout << fixed << setprecision(2); 
    cout << "ת����������¶���: " << Cel << "��C" << endl;
    return 0;
}