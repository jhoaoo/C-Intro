#include <iostream>
using namespace std;

long long factorial(int n) {
    long long fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    long long suma = 0;
    
    cout << "Ingrese un numero entero positivo: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        suma += factorial(i);
    }
    
    cout << "La sumatoria de factoriales desde 1! hasta " << n << "! es: " << suma << endl;
    return 0;
}