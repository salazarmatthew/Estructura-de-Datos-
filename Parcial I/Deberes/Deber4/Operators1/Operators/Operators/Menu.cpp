#include "Menu.h"

/**
* @brief menu
*
* @param
*
* @return int option
*/
int Menu::get_option() {
    return option;
}

/**
* @brief set_option
*
* @param _option
*
* @return
*/
void Menu::set_option(int _option) {
    option = _option;
}

/**
* @brief get_validation
*
* @param
*
* @return validation
*/
Validation Menu::get_validation() {
    return validation;
}

/**
* @brief set_validation
*
* @param Validation _validation
*
* @return
*/
void Menu::set_validation(Validation _validation) {
    validation = _validation;
}

void Menu::menu(std::ostream& output) {
    Data<int> data_1;
    data_1.set_Data1(8);
    data_1.set_Data2(2);
    data_1.set_Data3(4);

    Data<float> data_2;
    data_2.set_Data1(8);
    data_2.set_Data2(5.3F);
    data_2.set_Data3(5.2F);


    Operations<float> op;
    Operations<int> op2;
    char opc[5];
    do {
        system("cls");
        std::cout << "-----------------------------------------" << std::endl;
        std::cout << "  1 Potencia" << std::endl;
        std::cout << "  0 Para salir" << std::endl;
        std::cout << "-----------------------------------------" << std::endl;
        std::cout << std::endl;
        std::cout << "Ingrese la operación a realizar: ";
        //scanf_s("%d", &option);
        validation.validate(opc);
        option = atoi(opc);
        system("cls");
        switch (option)
        {
        case 1:
            std::cout << "\t\t\nPotencias " << std::endl;
            std::cout << "\nLa Potencia de " << data_2.get_Data1() << "^" << data_2.get_Data3() << " = " << op.operator*(data_2);
            std::cout << "\nLa Potencia de " << data_1.get_Data1() << "^" << data_1.get_Data3() << " = " << op2.operator&(data_1);
            std::cout << "\nLa Potencia de" << data_2.get_Data2() << "^" << data_2.get_Data1() << " = " << op.operator^(data_2);
            std::cout << std::endl;
            system("pause");
            break;
        case 0:
            output << "Gracias por usar el programa! :)";
            std::cout << "Gracias por usar el programa! :)" << std::endl;
            std::cout << std::endl;
            exit(0);
            break;
        default:
            output << "!Opción invalida!";
            std::cout << "!Opción invalida!" << std::endl;
            system("pause");
            break;
        }
    } while (option != 0);
}