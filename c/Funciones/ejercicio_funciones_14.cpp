#include <iostream>
#include <cctype>
using namespace std;

void tipoCaracter(char c) {
    c = tolower(c);
    if (isalpha(c)) {
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            cout << "Es una vocal.\n";
        else
            cout << "Es una consonante.\n";
    } else {
        cout << "No es una letra.\n";
    }
}

int main() {
    char c;
    cout << "Ingrese un carácter: ";
    cin >> c;
    tipoCaracter(c);
    return 0;
}