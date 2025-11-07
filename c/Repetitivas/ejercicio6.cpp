#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> n;
    
    double peso, talla;
    double sumaPesos = 0, sumaTallas = 0;
    double maxPeso = 0, minPeso = 1000; // Valores extremos iniciales
    double maxTalla = 0, minTalla = 1000;
    
    for (int i = 0; i < n; i++) {
        cout << "Estudiante " << i + 1 << ":" << endl;
        cout << "Peso (kg): ";
        cin >> peso;
        cout << "Talla (m): ";
        cin >> talla;
        
        sumaPesos += peso;
        sumaTallas += talla;
        
        if (peso > maxPeso) maxPeso = peso;
        if (peso < minPeso) minPeso = peso;
        if (talla > maxTalla) maxTalla = talla;
        if (talla < minTalla) minTalla = talla;
    }
    
    cout << "\n--- ESTADISTICAS ---" << endl;
    cout << "Peso promedio: " << sumaPesos / n << " kg" << endl;
    cout << "Talla promedio: " << sumaTallas / n << " m" << endl;
    cout << "Peso maximo: " << maxPeso << " kg" << endl;
    cout << "Peso minimo: " << minPeso << " kg" << endl;
    cout << "Talla maxima: " << maxTalla << " m" << endl;
    cout << "Talla minima: " << minTalla << " m" << endl;
    
    return 0;
}