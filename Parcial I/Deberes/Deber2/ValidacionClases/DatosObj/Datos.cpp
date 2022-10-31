#include <iostream>
#include "Datos.h"

int Datos::validar (string x){
	int i=0;
	char c;
	for (i; i<x.size(); i++){
		c=x[i];
		if(isalpha(c)==0){
			if(isspace(c)==0){
			cout<<"El caracter: "<<c<<" no es valido\n"
			<<"Ingrese solo letras"	<<endl;
			return 0;
			}
		}
	}
	cout<<"Los datos son validos"<<endl;
	
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

double Datos::TestForDecimal(double Num) {
    double z;
    bool repite=true;

    while (Num > 1) {
        if (Num > 101)  {
        Num = Num - 100;
    }
        else if (Num > 12) { Num = Num - 10; }
        else { Num--; }
    }

	
	
    if (Num < 1 && Num > 0) {
        cout << "DATOS GUARDADOS ..." << std::endl;
        return 1;
        
    }
    else {
        cout << "Tipo de dato invalido!!!  \n \n" << std::endl;
		 return 0;
		 
	}

}

