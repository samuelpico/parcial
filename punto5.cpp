#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string frase;
    cout << "Ingrese una frase: ";
    getline(cin, frase);

    int i = 0;
    int j = (int)frase.size() - 1;
    bool palindromo = true;

    while (i < j) {
        if (!isalnum((unsigned char)frase[i])) {
            i++;
        } else if (!isalnum((unsigned char)frase[j])) {
            j--;
        } else {
            if (tolower((unsigned char)frase[i]) != tolower((unsigned char)frase[j])) {
                palindromo = false;
                break;
            }
            i++;
            j--;
        }
    }

    if (palindromo) {
        cout << "Es palindromo." << endl;
    } else {
        cout << "No es palindromo." << endl;
    }
    return 0;
}