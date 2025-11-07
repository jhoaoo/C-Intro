#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero entero positivo: ";
    cin >> n;
    
    cout << "Numeros impares desde 1 hasta " << n << ": ";
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            cout << i;
            if (i < n - 1) cout << ", ";
        }
    }
    cout << endl;
    return 0;
}