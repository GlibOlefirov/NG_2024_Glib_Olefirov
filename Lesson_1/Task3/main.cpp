
#include <iostream>
using namespace std;

int main()
{
    double a, b;
    cout << "first number: ";
    cin >> a;
    cout << "second number: ";
    cin >> b;
    char d;
    cout << "operation +,-,*,/: ";
    cin >>d;
    switch (d) {
    case '-':
        cout <<"Result:" <<a-b;
        break;
    case '+':
        cout <<"Result:" <<a+b;
        break;
    case '*':
        cout <<"Result:" <<a*b;
        break;
    case '/':
        cout <<"Result:" <<a/b;
        break;
    default:
        cout <<"ENTER THE OPERATION CORRECTLY";
        break;}
}
