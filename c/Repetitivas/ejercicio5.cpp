#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;
    cout << "Ingrese un numero entero: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        suma += i * i * i;
    }
    
    cout << "La suma de los cubos desde 1 hasta " << n << " es: " << suma << endl;
    return 0;
}