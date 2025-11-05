#include <iostream>
using namespace std;

int main() {
    char c;
    cout << "Ingrese un caracter: ";
    cin >> c;
    if (c >= 'A' && c <= 'Z')
        cout << "Es una mayuscula";
    else if (c >= 'a' && c <= 'z')
        cout << "Es una minuscula";
    else
        cout << "Es un simbolo";
    return 0;
}
