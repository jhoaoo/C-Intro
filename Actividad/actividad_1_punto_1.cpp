#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    float division;
    
    cout << "Ingrese el primer valor numérico: ";
    cin >> num1;
    cout << "Ingrese el segundo valor numérico: ";
    cin >> num2;

    cout << "\nLa adición es: " << num1 + num2;
    cout << "\nLa diferencia es: " << num1 - num2;
    cout << "\nLa multiplicación es: " << num1 * num2;

    if (num2 == 0)
        cout << "\nError: no es posible dividir entre cero.";
    else {
        division = float(num1) / num2;
        cout << "\nLa división es: " << division;
    }

    return 0;
}








