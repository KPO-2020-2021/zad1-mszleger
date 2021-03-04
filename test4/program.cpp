#include <stdio.h>

/**
 * W C++ w definicji funkcji należy podać jakie parametry będzie przyjmowała funkcja.
**/
double Dodaj(double Skl1, double Skl2);


int main( )
{
  double  Skl1 = 2.0,  Skl2 = 2.0;
  double  Wynik = Dodaj(Skl1,Skl2);

  printf("  Wynik dodawania:  %f + %f = %f\n",Skl1,Skl2,Wynik);

  return 0;
}
