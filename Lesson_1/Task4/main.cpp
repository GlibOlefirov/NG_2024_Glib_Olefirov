#include <iostream>
using namespace std;
int main() {
    int zarplata;
    cout << "СКІЛЬКИ ПОЛУЧАЄШ?: ";
    cin >> zarplata;
    int variant;
    if (zarplata<1000)
        variant=1;
    if (1000<zarplata)
        variant=2;
    if (zarplata>999999)
        variant=0;
    if (1000000<zarplata)
        variant=3;
    switch (variant){
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
