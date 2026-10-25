#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int n;

    cout << "Numero de filas (1 a 15): ";
    cin >> n;

    for (int fila = 0; fila < n; fila++) {

        for (int espacios = 0; espacios < n - fila - 1; espacios++) {
            cout << "   ";
        }

        long long coeficiente = 1;

        for (int k = 0; k <= fila; k++) {

            cout << setw(4) << coeficiente;

            coeficiente = coeficiente * (fila - k) / (k + 1);
        }

        cout << endl;
    }

    return 0;
}
//porfin