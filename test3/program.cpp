#include <stdio.h>
#include "modul.hpp"

/**
 * W C++ można zastąpić rozwiązanie z języka C wykorzystujące "extern" dołączeniem biblioteki zawierającej interesujące nas zmienne globalne
**/

// extern const double PI;
// extern const double E;


int main()
{
  printf("  PI: %f\n",PI);
  printf("   E: %f\n",E);
  return 0;
}
