#include <iostream>
using namespace std;

void cambio(int monto) {
    int billetes[] = {100, 50, 20, 10, 5, 2, 1};
    for (int i = 0; i < 7; i++) {
        int cantidad = monto / billetes[i];
        if (cantidad > 0) {
            cout << cantidad << " de " << billetes[i];
            if (billetes[i] >= 10)
                cout << " (billete)\n";
            else
                cout << " (moneda)\n";
            monto %= billetes[i];
        }
    }
}

int main() {
    int n;
    do {
        cout << "Ingrese monto entre 1 y 100: ";
        cin >> n;
    } while (n < 1 || n > 100);
    cambio(n);
    return 0;
}