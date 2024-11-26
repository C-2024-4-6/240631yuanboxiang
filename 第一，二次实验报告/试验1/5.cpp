#include <iostream>
#include <iomanip> 
using namespace std;
int main() {
    double Fah,Cel;
    cout << "请输入华氏温度: ";
    cin >> Fah;
    Cel = (Fah - 32) * 5.0 / 9.0;
    cout << fixed << setprecision(2); 
    cout << "转换后的摄氏温度是: " << Cel << "°C" << endl;
    return 0;
}