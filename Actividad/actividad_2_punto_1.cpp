#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Digite el primer número: ";
    cin >> a;
    cout << "Digite el segundo número: ";
    cin >> b;
    cout << "Digite el tercer número: ";
    cin >> c;

    if (a >= b && a >= c)
        cout << "El número mayor es: " << a;
    else if (b >= a && b >= c)
        cout << "El número mayor es: " << b;
    else
        cout << "El número mayor es: " << c;

    return 0;
}







