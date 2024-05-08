#include <iostream>
#include <vector>
using namespace std;

int main() {

    int intentos, n, k, resultado; //Declaro las variables.

    cin >> intentos; //Número de intentos a realizar.

    for (int i=0; i < intentos; i++) //Bucle para realizar los intentos.
    {
        cin >> n >> k; //Número de cartas y número de repeticiones.
        
        vector<int> repeticiones(101); //Arreglo que indexa del 0 al 100.
        resultado = n; //Resultado inicial.

        for (int i = 0; i < n; ++i) 
        {
            int num;
            cin >> num; //Número de la carta.
            repeticiones[num]++; //Se incrementa el número de repeticiones del número num.
            if (repeticiones[num] == k) resultado = k-1; //Si hay k repeticiones, entonces el resultado es k-1.
        }

        cout << resultado << endl; //Se muestra el resultado. Si nunca entra en el if, el resultado es n.
    }
    return 0;
}