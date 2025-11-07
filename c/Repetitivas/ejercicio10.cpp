#include <iostream>
using namespace std;

int main() {
    int a, b, suma = 0;
    
    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;
    
    cout << "Los primeros " << a << " multiplos de " << b << " son: ";
    for (int i = 1; i <= a; i++) {
        int multiplo = i * b;
        cout << multiplo;
        if (i < a) cout << ", ";
        suma += multiplo;
    }
    
    cout << "\nLa sumatoria es: " << suma << endl;
    return 0;
}