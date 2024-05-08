#include <iostream>
using namespace std;

int main() {

    int resultado; 

    while (true) {
        cin >> resultado;  //La entrada es el resultado. Es decir, la salida.
        if (resultado == 42) {
            break;  //Si la entrada es 42, se termina el programa.
        }
        cout << resultado << endl;  //Se muestra en consola la entrada. 
    }
}