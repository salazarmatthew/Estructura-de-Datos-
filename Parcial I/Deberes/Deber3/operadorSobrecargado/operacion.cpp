#include<iostream>
#include<iomanip>
#include "operacion.h"
#include<string.h>
using namespace std;

int Operacion::sumaAsignacion (int a, int b, int c)
{
	cout <<"Primera sobrecarga += "<<endl;
	return a+=b+c;
}
int Operacion::sumaAsignacion (int a,int b)
{
	cout <<"Segunda Sobrecarga += "<<endl;
	return a+=b;
}
int Operacion::multAsignacion (int a, int b, int c)
{
	cout <<"Primera sobrecarga *= "<<endl;
	return a*=b*c;
}
int Operacion::multAsignacion (int a, int b)
{
	cout <<"Segunda sobrecarga *= "<<endl;
	return a*=b;
}

