#include <iostream>
#include <stdlib.h>
#include <string.h>

#include "Datos.cpp"
using namespace std;
int validar (string);
bool isnumeric(char texto[100]);
double TestForDecimal(double Num);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Datos datos;
	Datos datos1;
	Datos datos2;
	string oracion;
	int opcion;
	char escribe[100];
	double decimal;
	
	
	do{
    cout << "1.Dato tipo char "<< endl;
    cout << "2.Dato tipo int "<< endl;
    cout << "3.Dato tipo double"<< endl;
    cout << "OPTION: ";
    std::cin >> opcion;
    
        switch(opcion){
            case 1:
            cout<<"Ingrese datos de tipo char: "<<endl;
            cin>>oracion;
			datos.validar (oracion);
                system("pause");
                break;
            case 2:
                cout << "Ingrese datos de tipo int  :  ";
	  			cin >> escribe;
	
	
				if(datos1.isnumeric(escribe))
				{
					cout<< "DATOS GUARDADOS ...";
					cout << "\n \n";
					system("pause");
				}
				else
				{
				cout << "Tipo de dato invalido!!!  \n \n";
                system("pause");
                break;
            case 3:
                cout << "Ingrese datos de tipo double  :   ";
				cin >> decimal;
				datos2.TestForDecimal(decimal);
                system("pause");
                break;
            case 4:
            	cout << "EXIT" << endl;
            	system("pause");
                break;
            default:
                cout << "OPTION ERROR" << endl;
                 system("pause");
                break;
        }
    }
        system("cls");
    }while(opcion != 4);
	

	return 0;

}
