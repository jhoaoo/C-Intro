#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Ingrese tres numeros: ";
    cin >> a >> b >> c;
    int menor = a;
    if (b < menor) menor = b;
    if (c < menor) menor = c;
    cout << "El menor es: " << menor;
    return 0;
}
