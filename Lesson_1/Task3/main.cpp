
#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    cout << "first number: ";
    cin >> num1;
    cout << "second number: ";
    cin >> num2;
    char operation;
    cout << "operation +,-,*,/: ";
    cin >>operation;
    switch (operation) {
    case '-':
        cout <<"Result:" <<num1-num2;
        break;
    case '+':
        cout <<"Result:" <<num1+num2;
        break;
    case '*':
        cout <<"Result:" <<num1*num2;
        break;
    case '/':
        cout <<"Result:" <<num1/num2;
        break;
    default:
        cout <<"ENTER THE OPERATION CORRECTLY";
        break;}
}
