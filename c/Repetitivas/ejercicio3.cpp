#include <iostream>
using namespace std;

bool esBisiesto(int año) {
    return (año % 4 == 0 && año % 100 != 0) || (año % 400 == 0);
}

int main() {
    int año1, año2;
    cout << "Ingrese el primer año: ";
    cin >> año1;
    cout << "Ingrese el segundo año: ";
    cin >> año2;
    
    // Asegurar que año1 sea el menor
    if (año1 > año2) {
        int temp = año1;
        año1 = año2;
        año2 = temp;
    }
    
    cout << "Años bisiestos entre " << año1 << " y " << año2 << ":" << endl;
    for (int año = año1; año <= año2; año++) {
        if (esBisiesto(año)) {
            cout << año << " ";
        }
    }
    cout << endl;
    return 0;
}