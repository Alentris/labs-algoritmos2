//Problem 1929 A. Sasha and the Beautiful Array

#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arreglo, int n); //Declaro la función BubbleSort.

int main() {

    int intentos, n, resultado; //Declaro las variables.

    cin >> intentos; //Número de intentos a realizar.

    for (int i=0; i < intentos; i++) //Bucle para realizar los intentos.
    {
        cin >> n; //Longitud del arreglo.
        resultado = 0; //Resultado inicial.
        vector<int> arreglo(n); //Declaro el arreglo.

        for (int i = 0; i < n; ++i) cin >> arreglo[i]; //Guardo en el arreglo lo ingresado por consola.

        bubbleSort(arreglo, n); //BubbleSort ordena el arreglo.

        for (int i = 1; i < n; i++) resultado += arreglo[i]-arreglo[i-1]; //Se hace la suma que pide el problema.

        cout << resultado << endl; //Se muestra el resultado.
    }
}

void bubbleSort(vector<int>& arreglo, int n) { //Algoritmo BubbleSort que ordena de menor a mayor.
    for (int i = 0; i < n; i++) {
        for (int j = n-1; j > i; j--) if (arreglo[j] < arreglo[j-1]) swap(arreglo[j], arreglo[j-1]);
    }
}