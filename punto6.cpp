#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string clave;
    cout << "Ingrese la contrasena: ";
    getline(cin, clave);

    bool mayuscula = false, minuscula = false, digito = false, simbolo = false;

    for (int i = 0; i < (int)clave.size(); i++) {
        unsigned char c = clave[i];
        if (isupper(c)) {
            mayuscula = true;
        } else if (islower(c)) {
            minuscula = true;
        } else if (isdigit(c)) {
            digito = true;
        } else if (!isspace(c)) {
            simbolo = true;
        }
    }

    bool largo = clave.size() >= 8;

    if (largo && mayuscula && minuscula && digito && simbolo) {
        cout << "Contrasena valida." << endl;
    } else {
        if (!largo)      cout << "- Debe tener al menos 8 caracteres." << endl;
        if (!mayuscula)  cout << "- Falta al menos una letra mayuscula." << endl;
        if (!minuscula)  cout << "- Falta al menos una letra minuscula." << endl;
        if (!digito)     cout << "- Falta al menos un digito." << endl;
        if (!simbolo)    cout << "- Falta al menos un simbolo." << endl;
        cout << "Contrasena invalida." << endl;
    }
    return 0;
}