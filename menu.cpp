#include <iostream>
using namespace std;

int main() {
    char opcion;

    do {
        cout << "Menu de Almuerzo" <<"\n";
        cout << "a) carne asada"<<"\n";
        cout << "b) pollo"<<"\n";
        cout << "c) cerdo"<<"\n";
        cout << "d) pasta"<<"\n";
        cout << "e) ensalada"<<"\n";
        cout << "x) Salir\n";
        cout << "Elija una opcion:"<<"\n";
        cin >> opcion;
        cout <<"opcion seleccionada"<< opcion <<"\n";
    } 
        while  (opcion == 'a'); {
            cout << "Ha seleccionado carne asada." << "\n";
        }  if (opcion == 'b') {
            cout << "Ha seleccionado pollo." << "\n";
        } else if (opcion == 'c') {
            cout << "Ha seleccionado cerdo." << "\n";
        } else if (opcion == 'd') {
            cout << "Ha seleccionado pasta." << "\n";
        } else if (opcion == 'e') {
            cout << "Ha seleccionado ensalada." << "\n";
        } else if (opcion == 'x') {
            cout << "Saliendo del programa." << "\n";
        } else {
            cout << "Opción no válida. Por favor, elija una opción válida." << "\n";
        }
         (opcion != 'x');

    return 0;
}
