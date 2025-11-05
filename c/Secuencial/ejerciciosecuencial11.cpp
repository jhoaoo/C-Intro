#include <iostream>
using namespace std;

int main() {
    double teoria, practica, ensayo;
    cout << "Ingresa nota de teoria, practica y ensayo: ";
    cin >> teoria >> practica >> ensayo;

    double promedio = (teoria * 0.2) + (practica * 0.6) + (ensayo * 0.2);
    cout << "Promedio ponderado: " << promedio << endl;
    return 0;
}
