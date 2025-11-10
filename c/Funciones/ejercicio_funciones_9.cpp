#include <iostream>
using namespace std;

void tiempo(int total, int &horas, int &min, int &seg) {
    horas = total / 3600;
    total %= 3600;
    min = total / 60;
    seg = total % 60;
}

int main() {
    int total, h, m, s;
    do {
        cout << "Ingrese total de segundos (>=0): ";
        cin >> total;
    } while (total < 0);

    tiempo(total, h, m, s);
    cout << h << "h " << m << "m " << s << "s" << endl;
    return 0;
}