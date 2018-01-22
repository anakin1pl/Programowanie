#include <stdio.h>
#include <stdlib.h>


int dlugoscnapisu(char*napis){

    int licznik=0;

            for(int i=0; napis[i]!='\0';i++)
            {
            licznik =licznik+1;
            }
                  return licznik;
}




int main()
{
   char napis[50];
   scanf("%s",&napis);

   printf("%i",dlugoscnapisu(napis));

    return 0;
}
