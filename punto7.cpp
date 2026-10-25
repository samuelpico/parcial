#include <iostream>
#include <string>
using namespace std;

int main() {
    char opcion;
    int k;
    string mensaje;

    cout << "Cifrar (C) o descifrar (D): ";
    cin >> opcion;

    cout << "Desplazamiento: ";
    cin >> k;

    cin.ignore();

    cout << "Mensaje: ";
    getline(cin, mensaje);

    if (opcion == 'D' || opcion == 'd') {
        k = -k;
    }

    for (int i = 0; i < mensaje.length(); i++) {

        if (mensaje[i] >= 'A' && mensaje[i] <= 'Z') {
            mensaje[i] = 'A' + (mensaje[i] - 'A' + k + 26) % 26;
        }
        else if (mensaje[i] >= 'a' && mensaje[i] <= 'z') {
            mensaje[i] = 'a' + (mensaje[i] - 'a' + k + 26) % 26;
        }
    }

    cout << "Resultado: " << mensaje << endl;

    return 0;
}
