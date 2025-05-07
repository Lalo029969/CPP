// Lectura o Entrada de Datos

#include <iostream> // Incluye la biblioteca est�ndar para entrada y salida de datos (cin, cout)

using namespace std; // Permite usar elementos del espacio de nombres est�ndar sin anteponer "std::"

int main() // Funci�n principal del programa: punto de entrada
{
    int numero; // Se declara una variable entera llamada 'numero' para almacenar el valor ingresado por el usuario

    cout << "Digite un Numero: "; // Se solicita al usuario que digite un n�mero (salida en pantalla)

    cin >> numero; // Se lee el n�mero ingresado por el usuario desde el teclado y se almacena en la variable 'numero'

    cout << "\n El Numero que usted Digito es: " << numero; // Se muestra en pantalla el n�mero que el usuario digit�

    return 0; // Fin del programa, devuelve 0 indicando que finaliz� correctamente
}

