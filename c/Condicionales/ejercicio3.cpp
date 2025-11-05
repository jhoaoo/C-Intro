#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Ingrese dos numeros: ";
    cin >> a >> b;
    if (a < b)
        cout << "El menor es: " << a;
    else
        cout << "El menor es: " << b;
    return 0;
}
