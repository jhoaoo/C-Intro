#include <iostream>
using namespace std;

int main() {
    int altura;
    char caracter;
    
    cout << "Digite la altura: ";
    cin >> altura;
    cout << "Digite el caracter: ";
    cin >> caracter;
    
    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= altura; j++) {
            // Primera o última fila, o primera o última columna
            if (i == 1 || i == altura || j == 1 || j == altura) {
                cout << caracter << " ";
            } else {
                cout << "  "; // Dos espacios para mantener alineación
            }
        }
        cout << endl;
    }
    
    return 0;
}