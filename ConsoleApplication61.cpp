#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;
void ga(int* numeros, int size)
{
    for (int i = 0; i < size; i++)
    {
        numeros[i] = 97 + rand() % (122 - 97 + 1);
        cout << endl << numeros[i];
    }
    cout << endl;
    cout << endl;
}
void ma(int* numeros, int size)
{
    int mayor = 0;
    for (int i = 0; i > size; i++)
    {
        if ((int)numeros[i] > mayor)
        {
            mayor = numeros[i];
        }
        
    }
}
void mm(int* numeros, int size)
{
    int menor = INFINITY;

    for (int i = 0; i > size; i++)
    {
        if ((int)numeros[i] < menor)
        {
            menor = numeros[i];
        } 
    }
    cout << endl << menor;
}
void mv(int* numeros, int size)
{
    int vocales = size;
    for (int i = 0; i > size; i++)
    {

    }
}
void mc(int* numeros, int size)
{

}
void ia(int* numeros, int size)
{
    int p = 0;
    bool e = false;
    char letra;
    int letrai;
    do {
        cout << "Ingrese la letra a buscar: "; cin >> letra;
        letrai = int(letra);
    } while (letra < 97 || letra > 122);
    for (int i = 0; i < size; i++)
    {
        if (numeros[i] = letrai)
        {
            e = true;
            p = i;
        }
    }

    if (e == true)
    {
        cout << "Posicion e la letra: " << p;
    }
    else {
        cout << "Letra no encontrada";
    }
}
void m()
{
    cout << "1. Generar Arreglo dinamico y mostrarlo";
    cout << endl << "2. Mostrar el mayor";
    cout << endl << "3. Mostrar el menor";
    cout << endl << "4. Mostrar la cantidad de vocales";
    cout << endl << "5. Mostrar la cantidad consonantes";
    cout << endl << "6. Buscar letra e imprimir su posicion";
    cout << endl << "7. Ordenar y mostrar";
}
int main()
{
    int c;
    srand(time(nullptr));
    int size = 10 + rand() % 15;
    int* numeros;
    numeros = new int(size);

    while (true)
    {
        m();
        cout << endl;
        cout << endl;
        cout << "Seleccione una opcion: "; cin >> c;

        if (c == 1)
        {
            ga(numeros, size);
        }

        if (c == 2)
        {
            ma(numeros, size);
        }

        if (c == 3)
        {
            mm(numeros, size);
        }

        if (c == 4)
        {
            mv(numeros, size);
        }

        if (c == 5)
        {
            mc(numeros, size);
        }

        if (c == 6)
        {
            ia(numeros, size);
        }

        if (c == 7)
        {
            
        }
    }

    return 0;
}