#include <iostream>
using namespace std;
void calculator() {
    double num1, num2;
    char op;
    cout << "�������һ������: ";
    cin >> num1;
    if (cin.fail())
    {
        cout << "����: ������Ч����ȷ������������֣�" << endl;
        return;
    }
    cout << "����������� (+, -, *, /, %): ";
    cin >> op;
    cout << "������ڶ�������: ";
    cin >> num2;
    if (cin.fail()) {
        cout << "����: ������Ч����ȷ������������֣�" << endl;
        return;
    }
    switch (op) {
    case '+':
        cout << "���: " << num1 + num2 << endl;
        break;
    case '-':
        cout << "���: " << num1 - num2 << endl;
        break;
    case '*':
        cout << "���: " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 == 0) {
            cout << "����: ��������Ϊ�㣡" << endl;
        }
        else {
            cout << "���: " << num1 / num2 << endl;
        }
        break;
    case '%':
        if (num2 == 0) {
            cout << "����: ��������Ϊ�㣡" << endl;
        }
        else {
            if (num1 != int(num1) || num2 != int(num2)) {
                cout << "����: ȡ�������������������" << endl;
            }
            else {
                cout << "���: " << static_cast<int>(num1) % static_cast<int>(num2) << endl;
            }
        }
        break;
    default:
        cout << "����: ��Ч���������" << endl;
        break;
    }
}
int main() {
    calculator();
    return 0;
}

