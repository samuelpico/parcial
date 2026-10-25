#include <iostream>
#include <string>
using namespace std;

int main() {

    int opcion;
    string cadena;

    cout << "1. Comprimir" << endl;
    cout << "2. Descomprimir" << endl;
    cout << "Opcion: ";
    cin >> opcion;

    cout << "Cadena: ";
    cin >> cadena;

    if (opcion == 1) {

        string resultado = "";
        int contador = 1;

        for (int i = 0; i < cadena.length(); i++) {

            if (i + 1 < cadena.length() &&
                cadena[i] == cadena[i + 1]) {

                contador++;
            }
            else {

                resultado += cadena[i];
                resultado += to_string(contador);

                contador = 1;
            }
        }

        cout << "Comprimida: " << resultado << endl;
    }

    else if (opcion == 2) {

        string resultado = "";
        int i = 0;
        bool valido = true;

        while (i < cadena.length()) {

            char caracter = cadena[i];

            i++;

            if (i >= cadena.length() ||
                cadena[i] < '0' ||
                cadena[i] > '9') {

                valido = false;
                break;
            }

            int cantidad = 0;

            while (i < cadena.length() &&
                   cadena[i] >= '0' &&
                   cadena[i] <= '9') {

                cantidad = cantidad * 10 + (cadena[i] - '0');
                i++;
            }

            if (cantidad == 0) {
                valido = false;
                break;
            }

            for (int j = 0; j < cantidad; j++) {
                resultado += caracter;
            }
        }

        if (valido) {
            cout << "Descomprimida: " << resultado << endl;
        }
        else {
            cout << "Formato invalido." << endl;
        }
    }

    else {
        cout << "Opcion invalida." << endl;
    }

    return 0;
}
