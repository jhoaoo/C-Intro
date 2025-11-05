#include <iostream>
using namespace std;

int main() {
    int mes;
    do {
        cout << "Ingrese un número entre 1 y 12: ";
        cin >> mes;
    } while (mes < 1 || mes > 12);

    switch (mes) {
        case 1: cout << "Enero"; break;
        case 2: cout << "Febrero"; break;
        case 3: cout << "Marzo"; break;
        case 4: cout << "Abril"; break;
        case 5: cout << "Mayo"; break;
        case 6: cout << "Junio"; break;
        case 7: cout << "Julio"; break;
        case 8: cout << "Agosto"; break;
        case 9: cout << "Setiembre"; break;
        case 10: cout << "Octubre"; break;
        case 11: cout << "Noviembre"; break;
        case 12: cout << "Diciembre"; break;
    }

    return 0;
}



