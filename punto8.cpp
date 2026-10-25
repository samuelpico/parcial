#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Ingrese N (>= 1): ";
    cin >> N;

    int mejorNumero = 1;
    int mayorPasos = 0;
    int mayorValor = 1;

    for (int numero = 1; numero <= N; numero++) {

        int x = numero;
        int pasos = 0;
        int maximo = x;

        while (x != 1) {

            if (x % 2 == 0) {
                x = x / 2;
            }
            else {
                x = 3 * x + 1;
            }

            pasos++;

            if (x > maximo) {
                maximo = x;
            }
        }

        if (pasos > mayorPasos) {
            mayorPasos = pasos;
            mejorNumero = numero;
            mayorValor = maximo;
        }
    }

    cout << "Numero con la secuencia mas larga: "
         << mejorNumero << endl;

    cout << "Pasos: " << mayorPasos << endl;

    cout << "Valor maximo alcanzado: "
         << mayorValor << endl;

    return 0;
}
