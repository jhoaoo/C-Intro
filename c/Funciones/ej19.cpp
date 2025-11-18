#include <iostream>
using namespace std;
bool esPrimo(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}
void listarPrimos(int limite) {
    for (int i = 1; i <= limite; i++) {
        if (esPrimo(i)) cout << i << " ";
    }
    cout << endl;
}
int main() {
    int n;
    cout << "Listar primos hasta: ";
    cin >> n;
    listarPrimos(n);
    return 0;
}
