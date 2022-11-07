#include <iostream>
#include "Menu.h"
int main()
{
    setlocale(LC_ALL, "");
    Menu menu;
    menu.menu(std::cout);
}