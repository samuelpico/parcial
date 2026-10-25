#include <iostream>
using namespace std;

int sumaDivisoresPropios(int J) {
    if (J == 1) return 0;
    int s = 1;
    for (int i = 2; i * i <= J; i++) {
        if (J % i == 0) {
            s += i;
            int otro = J / i;
            if (otro != i) s += otro;
        }
    }
    return s;
}

int main() {
    cout << "dame un intervalo de numeros: ";
    int a, b;
    cin >> a >> b;

    if (!(1 <= a && a <= b)) {
        cout << "Invalido Loca" << endl;
        return 1;
    }

    int perfectos = 0, abundantes = 0, deficientes = 0;

    for (int J = a; J <= b; J++) {
        int s = sumaDivisoresPropios(J);

        if (s == J) {
            perfectos++;
            cout << J << " Es un numero perfecto (suma de sus divisores: " << s << ")" << endl;
        } else if (s > J) {
            abundantes++;
            cout << J << " Es un numero abundante (suma de sus divisores: " << s << ")" << endl;
        } else {
            deficientes++;
            cout << J << " Es un numero deficiente (suma de sus divisores: " << s << ")" << endl;
        }
    }

    cout << "Perfectos: " << perfectos
         << ", Abundantes: " << abundantes
         << ", Deficientes: " << deficientes << endl;

    return 0;
}