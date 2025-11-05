#include <iostream>
using namespace std;

int main() {
    char c;
    cout << "Ingrese un caracter: ";
    cin >> c;
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            cout << "Es una vocal";
        else
            cout << "Es una consonante";
    } else {
        cout << "Es otro caracter";
    }
    return 0;
}
