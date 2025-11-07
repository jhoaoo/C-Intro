#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero entero positivo: ";
    cin >> n;
    
    cout << "Descomposicion en factores primos de " << n << ": ";
    
    int divisor = 2;
    bool primero = true;
    
    while (n > 1) {
        int contador = 0;
        while (n % divisor == 0) {
            contador++;
            n /= divisor;
        }
        
        if (contador > 0) {
            if (!primero) cout << " x ";
            cout << divisor;
            if (contador > 1) cout << "^" << contador;
            primero = false;
        }
        divisor++;
    }
    cout << endl;
    
    return 0;
}