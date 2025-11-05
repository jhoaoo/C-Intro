#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Ingrese un numero de 3 digitos: ";
    cin >> num;
    int primero = num / 100;
    int ultimo = num % 10;
    if (primero == ultimo)
        cout << "El primer y ultimo digito son iguales";
    else
        cout << "El primer y ultimo digito son diferentes";
    return 0;
}
