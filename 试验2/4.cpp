#include <iostream>
using namespace std;
void calculator() {
    double num1, num2;
    char op;
    cout << "请输入第一个数字: ";
    cin >> num1;
    if (cin.fail())
    {
        cout << "错误: 输入无效，请确保输入的是数字！" << endl;
        return;
    }
    cout << "请输入运算符 (+, -, *, /, %): ";
    cin >> op;
    cout << "请输入第二个数字: ";
    cin >> num2;
    if (cin.fail()) {
        cout << "错误: 输入无效，请确保输入的是数字！" << endl;
        return;
    }
    switch (op) {
    case '+':
        cout << "结果: " << num1 + num2 << endl;
        break;
    case '-':
        cout << "结果: " << num1 - num2 << endl;
        break;
    case '*':
        cout << "结果: " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 == 0) {
            cout << "错误: 除数不能为零！" << endl;
        }
        else {
            cout << "结果: " << num1 / num2 << endl;
        }
        break;
    case '%':
        if (num2 == 0) {
            cout << "错误: 除数不能为零！" << endl;
        }
        else {
            if (num1 != int(num1) || num2 != int(num2)) {
                cout << "错误: 取余操作仅适用于整数！" << endl;
            }
            else {
                cout << "结果: " << static_cast<int>(num1) % static_cast<int>(num2) << endl;
            }
        }
        break;
    default:
        cout << "错误: 无效的运算符！" << endl;
        break;
    }
}
int main() {
    calculator();
    return 0;
}

