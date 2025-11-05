#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Digite un valor numérico: ";
    cin >> num;

    cout << "El número es " << ((num > 0) ? "positivo" : "negativo o cero") << endl;
    cout << "Además, es " << ((num % 2 == 0) ? "par" : "impar") << endl;

    return 0;
}







