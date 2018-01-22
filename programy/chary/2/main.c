#include <stdio.h>
#include <string.h>


char *f1(char *tab,char *tab2){

    char *wsk = malloc((strlen(tab)+strlen(tab2)+1)*sizeof(char));
    wsk[0]="\0";
    strcpy(wsk,tab);
    strcat(wsk,tab2);
    return wsk;

}

char *f2(char *tab,char *tab2){

    char *wsk;

    if(strlen(tab2)>strlen(tab))
    {
       wsk = strncat (tab, tab2, strlen(tab));
        return wsk;
    }
     else
    {
   wsk = malloc((strlen(tab)+strlen(tab2)+1)*sizeof(char));
    wsk[0]="\0";
    strcpy(wsk,tab);
    strcat(wsk,tab2);
    }
    return wsk;

}

int f3(const char *tab,const char *samo){

    char *wsk;
    int licznik =0;

      char * samogloski = strpbrk(tab, samo);

      while (samogloski != NULL)
      {
        printf("%c",samogloski);
        licznik++;
        samogloski = strpbrk(samogloski+1,samo);
      }

      return licznik;
 }



int main ()
{
 char tab[] ="ala";
 char tab2[]="ma kota";
 char samo[]="aieouy";
 printf("\n ilosc:");
 printf(" %i \n", f3(tab,samo));
  return 0;
}
