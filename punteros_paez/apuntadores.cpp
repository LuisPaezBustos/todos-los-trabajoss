#include <iostream>
using namespace std;

int main() 
{

int numero = 25;

int *puntero;

puntero = &numero;

cout << "valor de numero: " << numero << endl;

cout << "Direccion de numero: " << &numero << endl;

cout << "Contenido del puntero: " << *puntero << endl;

cout << "Valor del puntero por puntero: " << *puntero << endl;

*puntero = 100;

cout << "Nuevo valor del puntero: " << numero << endl;

return 0;
}