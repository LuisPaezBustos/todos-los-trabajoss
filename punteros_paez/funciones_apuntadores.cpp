#include <iostream>
using namespace std;

void incrementarPorValor(int x){

}

void incrementarPorPuntero(int *x){
    *x = *x +1;
}

void swap(int *a, int *b){
    int temporal = *a;
    *a = *b;
    *b = temporal;
}

void duplicarValores (int *arreglo, int tamano){
    for (int i = 0; i < tamano; i++) {
        arreglo[i] = arreglo[i] * 2;
    }
}

int* mayor(int *a, int *b) {
    if (*a > *b) {
        return a;
    }
    return b;
} 

int main(){

    int edad = 20;

    incrementarPorValor(edad);
    cout << "Despues de incrementarPorValor: " << edad << endl;

    incrementarPorPuntero(&edad);
    cout << "Despues de incrementarPorPuntero: " << edad << endl;

    cout << "----------------------------------" << endl;

    int x = 5, y = 9;
    cout << "Antes de swap -> x: " << x << ", y: " << y << endl;

    swap(&x, &y);
    cout << "Despues de swap -> x: " << x << ", y: " << y << endl;

    cout << "----------------------------------" << endl;

    int numeros[5] = {1, 2, 3, 4, 5};

    cout << "Arreglo original: ";
    for (int i = 0; i < 5; i++) cout << numeros[i] << " ";
    cout << endl;

    duplicarValores(numeros, 5);

    cout << "Arreglo duplicado: ";
    for (int i = 0; i < 5; i++) cout << numeros[i] << " ";
    cout << endl;

    cout << "-----------------------------------" << endl;

    int *p = mayor(&x, &y);
    cout << " El mayor entre x o y es: " << *p << endl;

    return 0;
}