#pragma once
#include <iostream>

#include "Data.h" 
#include "Operations.h"
#include "Validation.h"
class Menu
{
private:
	int option;
	Validation validation;
public:
	int get_option();
	void set_option(int);
	Validation get_validation();
	void set_validation(Validation _validation);
	void menu(std::ostream& output);
};

