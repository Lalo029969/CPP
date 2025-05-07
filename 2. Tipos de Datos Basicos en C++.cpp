// Tipos de Datos Básicos en C++

#include <iostream> // Biblioteca estándar para entrada y salida de datos

using namespace std; // Permite usar cout y endl sin anteponer "std::"

int main()
{
    // Declaración de una variable de tipo entero
    int entero = 15; // Almacena un número entero

    // Declaración de una variable de tipo flotante (número decimal de precisión simple)
    float flotante = 10.26;

    // Declaración de una variable de tipo double (número decimal de mayor precisión)
    double mayor = 1455.2548754424795421364;

    // Declaración de una variable de tipo carácter (se usa comilla simple)
    char caracter = 'A';

    // Imprime el valor de cada variable en pantalla
    cout << entero << endl;    // Muestra el número entero
    cout << flotante << endl;  // Muestra el número flotante
    cout << mayor << endl;     // Muestra el número de tipo double
    cout << caracter << endl;  // Muestra el carácter

    return 0; // Fin del programa, devuelve 0 para indicar que terminó correctamente
}

