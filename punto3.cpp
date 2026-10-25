#include <iostream>
#include <string>
using namespace std;
 int main ()
{
    int J;
    cout << "dame un numero impar: ";
    cin >> J;
    if(J<=0 || J%2==0){
        cout << "numero invalido" << endl;
        return 1;
    }
    
    int s = 1;
    while (s <= J) {
        for (int i = 0; i < (J-s)/2; i++) {
              cout << " ";
        }
        for (int i = 0; i < s; i++) {
              cout << "*";
        
        }
        cout << endl;
        s = s + 2;
    }
    s += 2;

    s= J - 2;
    while (s >= 1) {
        for (int i = 0; i < (J-s)/2; i++) {
              cout << " ";
        }
        for (int i = 0; i < s; i++) {
              cout << "*";
        }
        cout << endl;
        s -= 2;
    }
    return 0;
}