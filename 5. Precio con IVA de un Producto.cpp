/* Escribe un Programa que lea de la
entrada estandar el precio de un producto
y muestre en la salida estandar el precio
del producto al aplicarle el IVA */

#include <iostream> //Biblioteca Estandar de C++ para Entrada y Salida de Datos (i: input), (o:output) stream.

using namespace std;

int main() //Funcion Principal

{
	float precio; //Variable de Tipo Flotante, Mi Variable se llama Precio.
	float precio_con_iva; // Es flotante porque los precios pueden tener valores decimales	
	
	//Solicito al Usuario que digite el precio del producto:
	cout<<"\n Porfavor Digite el Precio del Producto: ";
	
	//Almaceno el numero en la variable precio.
	cin>>precio;
	
	// Ahora procedemos a resolver las Operaciones
	
	precio_con_iva = precio * 1.16;
	
	
	// Ahora Procedemos a Imprimir los Resultados en Pantalla:

	cout<<"\n El Costo del Producto con IVA Es: " <<precio_con_iva<<endl;

  return 0; // Fin del programa
  
}
