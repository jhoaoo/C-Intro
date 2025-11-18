#include <iostream>
#include <cmath>
using namespace std;
double areaTrianguloEquilatero(double lado) {
    return (sqrt(3.0) / 4.0) * lado * lado;
}
double areaRombo(double dMayor, double dMenor) {
    return (dMayor * dMenor) / 2.0;
}
double volumenCubo(double arista) {
    return arista * arista * arista;
}
int main() {
    int opcion;
    do {
        cout << "\nMENU\n";
        cout << "1. Area del triangulo equilatero\n";
        cout << "2. Area del rombo\n";
        cout << "3. Volumen del cubo\n";
        cout << "4. Finalizar\n";
        cout << "Opcion: ";
        cin >> opcion;
        if (opcion == 1) {
            double lado;
            cout << "Lado del triangulo: ";
            cin >> lado;
            cout << "Area: " << areaTrianguloEquilatero(lado) << endl;
        } else if (opcion == 2) {
            double dM, dN;
            cout << "Diagonal mayor: ";
            cin >> dM;
            cout << "Diagonal menor: ";
            cin >> dN;
            cout << "Area: " << areaRombo(dM, dN) << endl;
        } else if (opcion == 3) {
            double arista;
            cout << "Arista del cubo: ";
            cin >> arista;
            cout << "Volumen: " << volumenCubo(arista) << endl;
        }
    } while (opcion != 4);
    return 0;
}
