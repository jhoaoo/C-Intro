#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Digite un valor numérico: ";
    cin >> num;

    if (num % 5 == 0)
        cout << "El número " << num << " es múltiplo de 5.";
    else
        cout << "El número " << num << " no es múltiplo de 5.";

    return 0;
}





