#include <iostream>
using namespace std;

int main() {
    int a, b, temp;
    cout << "Ingresa dos numeros: ";
    cin >> a >> b;

    temp = a;
    a = b;
    b = temp;

    cout << "Ahora a = " << a << " y b = " << b << endl;
    return 0;
}
