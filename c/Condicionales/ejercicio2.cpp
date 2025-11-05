#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Ingrese un numero entero: ";
    cin >> num;
    if (num % 7 == 0)
        cout << "Es multiplo de 7";
    else
        cout << "No es multiplo de 7";
    return 0;
}
