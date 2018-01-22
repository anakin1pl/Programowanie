
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
       *wsk = strncat (str1, str2, strlen(tab1));
    }
     else
    {
   *wsk = malloc((strlen(tab)+strlen(tab2)+1)*sizeof(char));
    wsk[0]="\0";
    strcpy(wsk,tab);
    strcat(wsk,tab2);
    }
    return wsk;

}





int main ()
{
 char tab[] ="ala";
 char tab2[]="ma kota";
 //char *x= f1(tab,tab2);
 printf("%s",x);
  return 0;
}
