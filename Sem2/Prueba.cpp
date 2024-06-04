#include <iostream>
#include <vector>
using namespace std;

void bubbleSorteo(vector<int>& arreglo, int n);

int main() {

    int n;
    cin >> n;
    vector<int> arreglo(n);

    for (int i=0; i < n; i++) cin >> arreglo[i];

    cout << "ARREGLO ANTES DE ORDENAR: " << endl;
    cout << "[";
    for (int i=0; i < n; i++) cout << arreglo[i] << ", ";
    cout << "]" << endl << "" << endl;

    bubbleSorteo(arreglo, n);

    cout << "ARREGLO DESPUÉS DE ORDENAR: " << endl;
    cout << "[";
    for (int i=0; i < n; i++) cout << arreglo[i] << ", ";
    cout << "]";
}

void bubbleSorteo(vector<int>& arreglo, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = n-1; j > i; j--) if (arreglo[j] < arreglo[j-1]) swap(arreglo[j], arreglo[j-1]);
    }
}