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
        for (int j = 1; j <= i; j++) {
            cout << caracter << " ";
        }
        cout << endl;
    }
    
    return 0;
}