#include <iostream>
#include "Datos.h"

bool Datos::validar (string x){
	int i=0;
	char c;
	for (i; i<x.size(); i++){
		c=x[i];
		if(isalpha(c)==0){
			if(isspace(c)==0){
			cout<<"El caracter: "<<c<<" no es valido\n"
			<<"Ingrese solo letras"	<<endl;
			return false;
			}
		}
		else{
		cout<<"Los datos son validos"<<endl;
		return true;	
		}
	}
	
	
}

bool Datos::isnumeric(char texto[100])
{
	int val, cont, comp;
	
	string suplente;
	
	char letra;
	
	
	suplente = texto;
	
	comp = suplente.length();
	
	
	int i, j;
	
	int ini = 48;
	int fin = 57;
	
	for(i=0; i<= comp; i++)
	{
		letra = texto[i];
		val = letra;
		
		for(j=ini; j<=fin; j++)
		{
			if(val==j)
			{
				cont ++;
			}
		}
		
	}
		
	if(comp == cont)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

bool Datos::TestForDecimal(string Num) {

    int decimal = 0;
    bool respuesta = true;
    for (int i = 0; i < Num.length(); i++) {
        if (Num[i] < '0' || Num[i] > '9') {
            if (Num[i] == '.')
            {
                respuesta = true;
            }
            else {
                respuesta = false;
            }
        }
        if (Num[i] == '.') {
            decimal = decimal + 1;
        }
        if (decimal != 1 || Num[0] == '.' || Num[Num.length()] == '.') {
            respuesta = false;
        }

    }
    return respuesta;
}

