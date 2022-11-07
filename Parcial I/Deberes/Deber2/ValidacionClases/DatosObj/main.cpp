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
	string flotante;
	bool bandera = false;
	
	
	
	do{
    cout << "1.Dato tipo char "<< endl;
    cout << "2.Dato tipo int "<< endl;
    cout << "3.Dato tipo double"<< endl;
    cout << "OPTION: ";
    std::cin >> opcion;
    
        switch(opcion){
            case 1:
            do {

        		
				cout<<"Ingrese datos de tipo char: "<<endl;
            	cin>>oracion;

       			 bandera = datos1.validar(oracion);

    } while (bandera == false);
                system("pause");
                break;
            case 2:
            	do {

        		cout << "Ingrese dato de tipo entero :  ";
       			 cin >> escribe;


       			 bandera = datos.isnumeric(escribe);

    } while (bandera == false);
                system("pause");
                break;
            case 3:
                do {

        		cout << "Ingrese dato de tipo decimal :  ";
       			 cin >> flotante;


       			 bandera = datos2.TestForDecimal(flotante);

    } while (bandera == false);
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

        system("cls");
    }while(opcion != 4);
	

	return 0;

}
