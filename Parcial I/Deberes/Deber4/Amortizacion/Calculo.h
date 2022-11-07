#pragma once

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
using namespace std;


class Calculo{
    public:
    	
    	void readInputs(double &presentValue, double &rateOfInterest, int &numOfPayments, double &tax_pm);
    	void EMICalc(double presentValue, double rateOfInterest, int numOfPayments, double &EMI);
    	void calculateTax(double tax, int numOfPayments);
    	void printTable(double pV, double roI, int noP, double emi, double tax, double tax_pm);
    private:
    	
};
