#include <iostream>
using namespace std;

int main() {
    int num = 12;
    int i = 1;

    cout << "Tabla del 12:";

    while (i <= 12) {
        cout << num << " x " << i << " = " << (num * i);
        i++;
    }

    return 0;
}
