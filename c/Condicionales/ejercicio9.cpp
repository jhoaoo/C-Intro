#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Ingrese un numero de 3 digitos: ";
    cin >> num;
    int a = num / 100;
    int b = (num / 10) % 10;
    int c = num % 10;
    if (a == b || a == c || b == c)
        cout << "Al menos dos digitos son iguales";
    else
        cout << "Todos los digitos son diferentes";
    return 0;
}
