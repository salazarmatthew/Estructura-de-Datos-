/***********************************************************************
 * Module:  Cproceso.h
 * Author:  Matthew Salazar
 * Modified: miércoles, 26 de octubre de 2022 08:44:33 a. m.
 * Purpose: Declaration of the class Cproceso
 ***********************************************************************/

#if !defined(__Proceso_2_Cproceso_h)
#define __Proceso_2_Cproceso_h

class Cproceso
{
public:
   int getNum(void);
   void setNum(int newNum);
   int getDen(void);
   void setDen(int newDen);
   Cproceso(int nume, int deno);
   ~Cproceso();
   Cproceso relacional(Cproceso numer, Cproceso denom);
   void imprimirObj(Cproceso obj);

protected:
private:
   int num;
   int den;


};

#endif