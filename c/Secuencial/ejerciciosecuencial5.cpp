#include <iostream>
using namespace std;

int main() {
    double celsius;
    cout << "Ingresa los grados Celsius: ";
    cin >> celsius;

    double fahrenheit = (celsius * 9 / 5) + 32;
    cout << "Equivalente en Fahrenheit: " << fahrenheit << endl;
    return 0;
}
