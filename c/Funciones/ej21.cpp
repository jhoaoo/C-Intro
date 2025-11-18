#include <iostream>
using namespace std;
long long sumaDivisibles(int a, int b, int c) {
    long long suma = 0;
    for (int i = a; i <= b; i++) {
        if (i % c == 0) suma += i;
    }
    return suma;
}
int main() {
    int a, b, c;
    cout << "Valor de a: ";
    cin >> a;
    cout << "Valor de b: ";
    cin >> b;
    cout << "Valor de c: ";
    cin >> c;
    cout << "Sumatoria: " << sumaDivisibles(a, b, c) << endl;
    return 0;
}
