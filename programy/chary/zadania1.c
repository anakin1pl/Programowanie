#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int dlugoscnapisu(char*napis){

    int licznik=0;

            for(int i=0; napis[i]!='\0';i++)
            {
            licznik =licznik+1;
            }
                  return licznik;
}

void odwracanie (char*napis, int *tab){

    int i;
    int dlugosc = strlen(napis);

            for(i=0; napis[i]!='\0';i++)
            {
            tab = napis[dlugosc-i-1];}


             tab[dlugosc]='\0';

}

int spacje(char *napis){

    int licznik=0;

    for(int i=0;napis[i]!='\0';i++){
        if(napis[i] == ' ') {licznik+=1;}
    }

        return licznik;
}

void przytnij(char *napis, int n){

napis[n]='\0';

}

void maleduze(char *napis){

  int a, r='a'-'A';
  a=strlen(napis)-1;

    for(int i=0;i<=a;i++){

        if('a'<=napis[i] && napis[i]<='z') {napis[i] = napis[i]-r;}
    }

}

int takiesame(char *napis1, char *napis2){
//zle
    int dlugosc1=strlen(napis1), dlugosc2=strlen(napis2);

    if(dlugosc1 != dlugosc2) return 0;

    else {
        for(int i=0;dlugosc1!='\0';i++)
        {
           if(napis1[i]!=napis2[i]) return 0;
        }
    }
    printf("tak");
    return 1;
}

void usuwanie(char *napis1, char *napis2){


    int k=0;

        for(int i=0;i<strlen(napis1);i++)
        {
            if(napis1[i]==napis2[i]) napis1[i]=1;
        }

        for(int i=0;i<strlen(napis1);i++)
        {
            if(napis1[i]!=1)
                napis1[k++] = napis1[i];
        }
        napis1[k]='\0';
}

void dopetli(char *napis1, char *napis2, char *napis3){


    int j=0;

        for(int i=0;i<strlen(napis1);i=i+2)
        {
            napis3[i]=napis1[j];
            napis3[i+1]=napis2[j];
            j++;
        }


}

void dopetli1(char *napis1, char *napis2, char *napis3){

//do poprawy
   int i=0;

        for(i;i<strlen(napis1);i++)
        {
            napis3[i]=napis1[i];
        }

        for(i;i<strlen(napis1);i++)
        {
            napis3[i]=napis2[i];
        }



}



int main()
{
   char napis1[] = "asdfff";
   char napis2[] = "123456";
   char napis3[30];
   int tab[50];

 //scanf("%s",&napis);


  dopetli1(napis1, napis2, napis3);
  puts(napis3);

    return 0;
}
