/* Escribe un Programa que lea de la
entrada estandar 2 numeros y muestre en la
salida estandar su suma, resta, multiplicacion
y división. */

#include <iostream> //Biblioteca Estandar de C++ para Entrada y Salida de Datos (i: input), (o:output) stream.

using namespace std;

int main() //Funcion Principal

{
	int n1,n2; //Variables de Tipo Entero, Mis Variables se llaman n1 y n2 respectivamente.
	int suma = 0; // Es Igual a Cero porque quiero que el valor de mi suma inicialice en cero y no almacene un valor basura.
	int resta = 0; // Es Igual a Cero porque quiero que el valor de mi resta inicialice en cero y no almacene un valor basura.
	int multiplicacion = 0; // Es Igual a Cero porque quiero que el valor de mi multiplicacion inicialice en cero y no almacene un valor basura.
	int division = 0; // Es Igual a Cero porque quiero que el valor de mi division inicialice en cero y no almacene un valor basura.
	
	//Solicito al Usuario que digite un numero:
	cout<<"\n Porfavor Digite un Numero: ";
	
	//Almaceno el numero en la variable n1.
	cin>>n1;
	
	//Solicito al Usuario que me de otro numero:
	cout<<"\n Porfavor Digite otro Numero: ";
	
	//Almaceno el segundo numero en la variable n2.
	cin>>n2;
	
	// Ahora procedemos a resolver las Operaciones
	
	suma = n1 + n2;
	resta = n1 - n2;
	multiplicacion = n1 * n2;
	division = n1 / n2;
	
	// Ahora Procedemos a Imprimir los Resultados en Pantalla:
	
	cout<<"\n La Suma Es: " <<suma<<endl;
	cout<<"\n La Resta Es: " <<resta<<endl;
	cout<<"\n La Multiplicacion Es: " <<multiplicacion<<endl;
	cout<<"\n La Division Es: " <<division<<endl;


  return 0;
}
