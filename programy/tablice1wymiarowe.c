/* generator LCG */
#include <stdio.h>
#include <conio.h>
#define ILE 10//ilosc wygenerownych liczb unsigned long psrand();

int main()
     {register int i;
      for ( i = 0; i<ILE; ++i)
          printf("\n%12ld",psrand());
getche();
return 0; }

unsigned long psrand()
     {static unsigned long seed = 1;
      seed = seed * 1103515245 + 12345;
      return  (seed/65536) % 32768;
     }
