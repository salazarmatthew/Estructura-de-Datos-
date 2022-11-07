#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include "Calculo.cpp"
using namespace std;

int main()
{
Calculo calculo;
double presentValue, rateOfInterest, EMI, tax, tax_pm;
int numOfPayments;
calculo.readInputs(presentValue, rateOfInterest, numOfPayments, tax_pm);
calculo.EMICalc(presentValue, rateOfInterest, numOfPayments, EMI);
calculo.calculateTax(tax, numOfPayments);
calculo.printTable(presentValue, rateOfInterest, numOfPayments, EMI, tax, tax_pm);
cout << "El EMI mensual es: " << EMI << endl;
double totalInterest = EMI * numOfPayments - presentValue;
cout << "Interes total pagado: " << totalInterest << endl;

}
