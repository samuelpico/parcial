#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string frase;
    int vocal = 0, consonantes = 0, digitos = 0, espacios = 0, otros = 0;

    cout << "Ingrese su una frase: ";
    getline(cin, frase);

    for (char c : frase) {
        c = tolower(c);

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vocal++;
        } else if (isalpha(c)) {
            consonantes++;
        } else if (isdigit(c)) {
            digitos++;
        } else if (c == ' ') {
            espacios++;
        } else {
            otros++;
        }
    }

    cout << "La frase tiene " << vocal << " vocales y " << consonantes << " consonantes." << endl;
    cout << "Digitos: " << digitos << ", espacios: " << espacios << ", otros: " << otros << endl;

    return 0;
}
//67676767