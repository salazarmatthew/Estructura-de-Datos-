#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include "Calculo.h"

using namespace std;


//Lee el monto principal de entrada, la tasa de interés y el número de pagos.
void Calculo::readInputs(double &presentValue, double &rateOfInterest, int &numOfPayments, double &tax_pm)
{
cout << "Ingrse el monto del prestamo: ";
cin >> presentValue;
cout << "Introduzca la tasa de interes anual (como porcentaje): ";
cin >> rateOfInterest;
rateOfInterest = (rateOfInterest / 100) / 12;
cout << "Ingrese el número de pagos: ";
cin >> numOfPayments;
cout << "¿Cuál es el monto del impuesto por año?";
cin >> tax_pm;
}

//Calcula el EMI por pago, dadas las entradas.
void Calculo::EMICalc(double presentValue, double rateOfInterest, int numOfPayments, double &EMI)
{
EMI = (rateOfInterest * presentValue) / (1 - pow((1 + rateOfInterest), (-1 * numOfPayments)));
EMI = floor(EMI * 100 + 0.5) / 100;
}

//Calcula la cantidad total de impuestos pagados cada año
void Calculo::calculateTax(double tax, int numOfPayments)
{
double No_of_Payments_in_years = numOfPayments / 12;
double totalTax = tax * No_of_Payments_in_years;
double tax_pm = totalTax / numOfPayments;
}

void Calculo::printTable(double pV, double roI, int noP, double emi, double tax, double tax_pm)
{
ofstream outFile;
outFile.open("TablaAmortizacion.txt");

outFile << "Principal\t$" << pV << "\tPago\t$" << emi << endl;
outFile << "Interes Anual\t" << fixed << setprecision(1) << roI * 12 * 100 << "%\tPlazo\t" << noP << " Meses" << endl;
outFile << "Pagos Mensuales\t\tInteres\t\tPrincipal\tImpuesto\tBalancePrincipal" << endl;
double interest, principal;
for (int i = 0; i < noP; i++)
{
interest = pV * roI;
if (interest < 0)
interest = 0;
principal = emi - interest;
if (principal < 0)
principal = 0;
pV = pV - principal + tax;
if (pV < 0)
pV = 0;
outFile << "\t" << i + 1 << "\t\t" << fixed << setprecision(2) << interest << "\t\t" << principal << "\t\t" << tax_pm << "\t\t" << pV << endl;

}
outFile << "Pago final\t" << interest + principal << endl;
}
