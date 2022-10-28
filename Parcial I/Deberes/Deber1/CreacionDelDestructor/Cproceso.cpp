/***********************************************************************
 * Module:  Cproceso.cpp
 * Author:  Matthew Salazar
 * Modified: miércoles, 26 de octubre de 2022 08:44:33 a. m.
 * Purpose: Implementation of the class Cproceso
 ***********************************************************************/

#include "Cproceso.h"
#include <iostream>
using namespace std;


int Cproceso::getNum(void)
{
   return num;
}


void Cproceso::setNum(int newNum)
{
   num = newNum;
}


int Cproceso::getDen(void)
{
   return den;
}

////////////////////////////////////////////////////////////////////////
// Name:       Cproceso::setDen(int newDen)
// Purpose:    Implementation of Cproceso::setDen()
// Parameters:
// - newDen
// Return:     void
////////////////////////////////////////////////////////////////////////

void Cproceso::setDen(int newDen)
{
   den = newDen;
}

////////////////////////////////////////////////////////////////////////
// Name:       Cproceso::Cproceso(int nume, int deno)
// Purpose:    Implementation of Cproceso::Cproceso()
// Parameters:
// - nume
// - deno
// Return:     
////////////////////////////////////////////////////////////////////////

Cproceso::Cproceso(int nume, int deno)
{
   this->num=nume;
   this->den=deno;
}

////////////////////////////////////////////////////////////////////////
// Name:       Cproceso::~Cproceso()
// Purpose:    Implementation of Cproceso::~Cproceso()
// Return:     
////////////////////////////////////////////////////////////////////////

Cproceso::~Cproceso()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Cproceso::relacional(Cproceso numer, Cproceso denom)
// Purpose:    Implementation of Cproceso::relacional()
// Parameters:
// - numer
// - denom
// Return:     Cproceso
////////////////////////////////////////////////////////////////////////

Cproceso Cproceso::relacional(Cproceso obj1, Cproceso obj2)
{
   int a,b,c,d;
   b=obj1.getDen();
   a=obj1.getNum();
   d=obj2.getDen();
   c=obj2.getNum();
   this->setNum((a*d)+(b*c));
   this->setDen(b*d);
   return *this;
}

////////////////////////////////////////////////////////////////////////
// Name:       Cproceso::imprimirObj(Cproceso obj)
// Purpose:    Implementation of Cproceso::imprimirObj()
// Parameters:
// - obj
// Return:     void
////////////////////////////////////////////////////////////////////////

void Cproceso::imprimirObj(Cproceso obj)
{
   cout<<obj.getNum()<<"/"<<obj.getDen()<<endl;
}
