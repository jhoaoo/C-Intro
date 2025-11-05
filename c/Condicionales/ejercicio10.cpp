#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Ingrese un numero de 3 digitos: ";
    cin >> num;
    int a = num / 100;
    int b = (num / 10) % 10;
    int c = num % 10;

    if ((a != 0 && b % a == 0) || (a != 0 && c % a == 0) ||
        (b != 0 && a % b == 0) || (b != 0 && c % b == 0) ||
        (c != 0 && a % c == 0) || (c != 0 && b % c == 0))
        cout << "Alguno de los digitos es multiplo de otro";
    else
        cout << "Ningun digito es multiplo de otro";
    return 0;
}
