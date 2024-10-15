#include <iostream>
using namespace std;

int main() {
    int zp;
    cout << "СКІЛЬКИ ПОЛУЧАЄШ?: ";
    cin >> zp;
    int a;
    if (zp<1000)
    {
        a=1;
    }
    if (1000<zp)
    {
        a=2;
    }
    if (zp>999999)
    {
        a=0;
    }
    if (1000000<zp)
    {
        a=3;
    }
    switch (a){
    case (1):
        cout <<"работай больше";
        break;
    case (2):
        cout <<"молодец";
        break;
    case (3):
        cout <<"миллионер";
        break;
    case (0):
        break;
    }
}
