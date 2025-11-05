#include <iostream>
using namespace std;

int main() {
    char nombre[50];
    int edad;
    char sexo;
    float altura;

    cout << "Ingrese su nombre: ";
    cin.ignore();
    cin.getline(nombre, 50);
    cout << "Ingrese su edad (en años): ";
    cin >> edad;
    cout << "Ingrese su sexo (M o F): ";
    cin >> sexo;
    cout << "Ingrese su altura (en metros): ";
    cin >> altura;

    cout << "\n=== REGISTRO ===" << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << " años" << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "Altura: " << altura << " m" << endl;

    return 0;
}









