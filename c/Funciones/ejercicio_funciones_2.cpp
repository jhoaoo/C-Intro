#include <iostream>
using namespace std;

float convertirFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    float celsius;
    cout << "Ingrese temperatura en Celsius: ";
    cin >> celsius;
    cout << "Equivalente en Fahrenheit: " << convertirFahrenheit(celsius) << endl;
    return 0;
}