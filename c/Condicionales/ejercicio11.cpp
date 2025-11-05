#include <iostream>
using namespace std;

int main() {
    int nums[5];
    cout << "Ingrese cinco numeros: ";
    for (int i = 0; i < 5; i++)
        cin >> nums[i];

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (nums[j] > nums[i])
                swap(nums[i], nums[j]);
        }
    }

    cout << "Numeros ordenados de mayor a menor: ";
    for (int i = 0; i < 5; i++)
        cout << nums[i] << " ";
    return 0;
}
