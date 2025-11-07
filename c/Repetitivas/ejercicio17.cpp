#include <iostream>
using namespace std;

int main() {
    int altura;
    char caracter;
    
    cout << "Digite la altura: ";
    cin >> altura;
    cout << "Digite el caracter: ";
    cin >> caracter;
    
    // Parte superior (decreciente)
    for (int i = altura; i >= 1; i--) {
        // Espacios
        for (int j = 1; j <= altura - i; j++) {
            cout << " ";
        }
        // Caracteres
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << caracter << " ";
        }
        cout << endl;
    }
    
    // Parte inferior (creciente)
    for (int i = 2; i <= altura; i++) {
        // Espacios
        for (int j = 1; j <= altura - i; j++) {
            cout << " ";
        }
        // Caracteres
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << caracter << " ";
        }
        cout << endl;
    }
    
    return 0;
}