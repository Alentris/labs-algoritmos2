//Problem RK Sorting

//NOTA: Este código no resuelve el problema. Dejo acá lo que conseguí hacer hasta entonces.

#include <iostream>
#include <vector>
#include <utility>
using namespace std;

void bubbleSort(vector<pair<int,int>>& arreglo, vector<int>& repeticiones, int n);

int main() {

    int n, c; //Declaro las variables.

    cin >> n >> c; //Tamaño del arreglo y el mayor valor que puede tener un número del arreglo.
    vector<int> repeticiones(c+1); //Arreglo que indexa del 0 al c.
    vector<pair<int,int>> arreglo(n); //Declaro el arreglo de valores.

    for (int i=0; i < n; i++) 
    {
        int num;
        cin >> num; //Guardo en el arreglo lo ingresado por consola.
        repeticiones[num]++; //Se incrementa el número de repeticiones del número num.
        arreglo[i] = make_pair(num, i); //Guardo el número y su posición en el arreglo.
    }

    bubbleSort(arreglo, repeticiones, n); //Ordeno el arreglo de mayor a menor.
    
    for (int i=1; i<n; i++)
    {
        //Si el elemento i tiene el mismo número de repeticiones que el anterior (i-1) y no son el mismo número,
        //y si el elemento i aparece antes que el elemento i-1, entonces los intercambio.
        if (repeticiones[arreglo[i].first] == repeticiones[arreglo[i-1].first] && arreglo[i].first!=arreglo[i-1].first && arreglo[i].second < arreglo[ i-repeticiones[arreglo[i-1].first] ].second)
        { 
            int x = i;
            for (int j = 0; j < repeticiones[i]; j++) //Este es el for que intercambia los números i con los i-1.
            {
                swap(arreglo[x], arreglo[x-repeticiones[arreglo[x-1].first]]);
                x++;
            }                
        }
    }
    
    for (int i=0; i<n; i++) cout << arreglo[i].first << " "; //Imprimo el resultado.
}

void bubbleSort(vector<pair<int,int>>& arreglo, vector<int>& repeticiones, int n) { //BubbleSort modificado.
    for (int i = 0; i < n; i++) {
        for (int j = n-1; j > i; j--) {
            //Si tiene más repiticiones el número j que el número j-1 y j != j-1,
            //entonces los intercambio.
            if (repeticiones[arreglo[j].first] > repeticiones[arreglo[j-1].first] && arreglo[j].first!=arreglo[j-1].first) {
                swap(arreglo[j], arreglo[j-1]);
            }
        }
    }
}