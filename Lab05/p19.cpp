#include <iostream>
using namespace std;

// ---------- INSERTION SORT ----------
void insertionSort(int* arr, int n) {
    for (int* i = arr + 1; i < arr + n; ++i) {
        int valor = *i;
        int* j = i - 1;
        while (j >= arr && *j > valor) {
            *(j + 1) = *j;
            --j;
        }
        *(j + 1) = valor;
    }
}

// ---------- QUICK SORT ----------
void quickSort(int* inicio, int* fin) {
    if (inicio >= fin) return;

    int* izq = inicio;
    int* der = fin;
    int pivote = *inicio;

    while (izq <= der) {
        while (*izq < pivote) ++izq;
        while (*der > pivote) --der;

        if (izq <= der) {
            int temp = *izq;
            *izq = *der;
            *der = temp;
            ++izq;
            --der;
        }
    }

    // Llamadas recursivas
    if (inicio < der) quickSort(inicio, der);
    if (izq < fin)    quickSort(izq, fin);
}

// ---------- MERGE SORT ----------
void merge(int* arr, int* aux, int* inicio, int* medio, int* fin) {
    int* i = inicio;
    int* j = medio + 1;
    int* k = inicio;

    while (i <= medio && j <= fin) {
        if (*i <= *j) {
            aux[k - arr] = *i;
            ++i;
        } else {
            aux[k - arr] = *j;
            ++j;
        }
        ++k;
    }

    while (i <= medio) {
        aux[k - arr] = *i;
        ++i;
        ++k;
    }

    while (j <= fin) {
        aux[k - arr] = *j;
        ++j;
        ++k;
    }

    for (int* p = inicio; p <= fin; ++p) {
        *p = aux[p - arr];
    }
}

void mergeSort(int* arr, int* aux, int* inicio, int* fin) {
    if (inicio >= fin) return;

    int* medio = inicio + (fin - inicio) / 2;

    mergeSort(arr, aux, inicio, medio);
    mergeSort(arr, aux, medio + 1, fin);
    merge(arr, aux, inicio, medio, fin);
}

// ---------- FUNCIÓN PARA IMPRIMIR ----------
void imprimir(int* arr, int n) {
    for (int* p = arr; p < arr + n; ++p)
        cout << *p << " ";
    cout << endl;
}

// ---------- MAIN ----------
int main() {
    int datos1[] = {9, 4, 7, 2, 1, 5};
    int datos2[] = {8, 3, 6, 0, 4, 7};
    int datos3[] = {5, 2, 9, 1, 3, 6};
    const int n = sizeof(datos1) / sizeof(datos1[0]);
    int aux[n];  // auxiliar para merge sort

    cout << "Insertion Sort: ";
    insertionSort(datos1, n);
    imprimir(datos1, n);

    cout << "Quick Sort: ";
    quickSort(datos2, datos2 + n - 1);
    imprimir(datos2, n);

    cout << "Merge Sort: ";
    mergeSort(datos3, aux, datos3, datos3 + n - 1);
    imprimir(datos3, n);

    return 0;
}
