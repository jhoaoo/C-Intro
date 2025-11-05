#include <iostream>
using namespace std;

int main() {
    int num;
    do {
        cout << "Ingrese un número entre 1 y 10: ";
        cin >> num;
    } while (num < 1 || num > 10);

    cout << "\nTabla del " << num << ":\n";
    for (int i = 1; i <= 10; i++)
        cout << num << " x " << i << " = " << num * i << endl;

    return 0;
}

