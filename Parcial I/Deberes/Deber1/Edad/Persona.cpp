#include <iostream>
#include "Datos.h"


using namespace std;


void Datos::Ingreso(){
	
	int year2, year1;
	int yearT;
	int ci;
	string nombre, apellido;
	
	
	cout << "Ingrese su Nombre: " << endl;
	cin >> nombre;
	
	cout << "\nIngrese su Apellido: " << endl;
	cin >> apellido;

	cout << "\nIngrese su Cedula de identidad: " << endl;
	cin >> ci;
	
	
	cout << "\nIngresar Anio de nacimiento (xxxx): " << endl;
	cin >> year2;
	
	while( year2 < 1922 || year2 > 2022 ){
		cout << "Dato no valido, volver a ingresar: " << endl;
		cin >> year2;
	}
	
	cout << "\nIngresar Anio actual (xxxx): " << endl;
	cin >> year1;
	
	while( year1 > 2022 || year1 < 2022){
		cout << "Dato no valido, volver a ingresar: " << endl;
		cin >> year1;
	}
 
	yearT = year1 - year2;
	
	cout << "\n\tHola, " << nombre<< endl;
	cout << endl << "   Sus Datos:  " << endl;
	cout <<"Nombre: "<<nombre<< endl;
	cout <<"Apellido: "<<apellido<< endl;
	cout <<"Cedula: "<<ci<< endl;
	cout << endl << "  Usted tiene la siguiente EDAD  " << endl;
    cout << "Anio/s: " <<yearT << endl; 
    
}

