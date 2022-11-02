/*
	UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
	Autores: Matthew Salazar
			 Cristian Felix
	NRC: 7999
	Nombre de la materia: Estructura de Datos
*/

#include <iostream>
#include "operacion.h"
#include "operacion.cpp"
using namespace std;

int main(int argc, char** argv) {
	
	int a,b,c;
	Operacion suma1;
	Operacion suma2;
	Operacion multiplicacion1;
	Operacion multiplicacion2;
	
   
    cout <<"Ingrese el valor de a: ";
	cin >>a;
	cout <<"Ingrese el valor de b: ";
	cin >>b;
	cout <<"Ingrese el valor de c: ";
	cin >>c;
	cout<< suma1.sumaAsignacion(a,b,c)<<endl;
	cout<< suma2.sumaAsignacion(a,b)<<endl;
	cout<< multiplicacion1.multAsignacion(a,b,c)<<endl;
	cout<< multiplicacion2.multAsignacion(a,b)<<endl;

}
