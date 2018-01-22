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

void f4(char* str, int gdzie, int co, int ile){


      if((gdzie+ile)<strlen(str))
          {
          str =realloc(str,strlen(str));
      }
      else
          {
          str =realloc(str, gdzie+ile+1);
      }

      memmove(str+gdzie,str+co,ile);
      str[gdzie+ile]='\0';
      puts(str);



}


char *f5(char *tab,char *tab2){

    int n;

    for(int i=0;i<strlen(tab);i++){

  n=memcmp(tab,tab2,i*sizeof(char));
   if(n>0 || n<0) {printf("\n nie są takie same");}
   else  if(n==0){printf("\n są takie same");}
}


return 0;

}

int main ()
{
 char tab[] ="ala am kota";
 char tab2[]="ala ma kota";
 //char samo[]="aieouy";
 /* char *str =malloc(50);
 strcpy(str,"TO JEST BARDZO DLUGI NAPIS" );
 int   gdzie =21;
 int   co    =15;
 int   ile   =11;

f4(str,gdzie,co,ile);
*/

 printf("%c",f5(tab,tab2));

    return 0;
}
