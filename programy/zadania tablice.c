#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void wypisz(int m, int n, int tab[][n]){

    int i,j;
    for (i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%i",tab[i][j]);
        } printf("\n");
    }
}


void zad1(int x, int tab[x][10]){

int i,j;
for (i=0;i<=x;i++){
    for(j=0;j<=10;j++){
        tab[i][j]=0;

}
}
}

void zad3 (int tab[][10], int x){

  int i,j,w,k,z;
scanf("%i%i%i",&w,&k,&z);

for (i=0;i<=10;i++){
    for(j=0;j<x;j++){
        if(i>w && j>k){ tab[j][i] =z;}
        else tab[j][i]=0;
    }
}

}

int zad8 (int m, int n, int l, int tab[m][n][l]){

  int i,j,k, w=tab[0][0][0];


for (i=0;i<m;i++){
    for(j=0;j<n;j++){
        for(k=0;k<l;k++){
            if(w<tab[i][j][k]) w=tab[i][j][k];

  }}}
return w;
}

void zad14 (int m, int n, int **t ){

    int i,j;

    for (i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%i",t[i][j]);
        }
       printf("\n");
    }
}

int **alokuj (int m, int n){

    int **t =malloc(sizeof(int*)*n);
    for(int i =0; i<n;i++){
        t[i]=malloc(sizeof(int)*m);}
    return t;

}

int main(){

    int m=14, n=9;
  //int tab[5][10];
  //int tab3d[2][2][2]={{{1,33},{3,4}},{{5,6},{7,8}}};

 //printf("%i",zad8(2,2,2,tab3d));
 //wypisz(5,10,tab);

int **t1 = alokuj(m,n);

wypisz(14,9,t1);


return 0;
}














/*przykład 2

 int y=3,x=5, i,j,counter =0;
 char **tab1;

 tab1= malloc((y)*sizeof(char*));
 for(i=0;i<y;i++){
     tab1[i]=malloc((1+x)*sizeof(char));
 }
for(i=0;i<y;i++){
    for(j=0;j<x;j++){
        tab1[i][j]='a'+counter;
        printf("%c ",tab1[i][j]);
        printf("%p   ",tab1[i][j]);
        counter++;
    }
    tab1[i][j]='\0';
    printf("\n");
}
printf("\n");

printf("liczba znakow 1 wiersza %i\n",strlen(tab1[0]));
printf("liczba znakow 2 wiersza %i\n",strlen(tab1[1]));
printf("liczba znakow 3 wiersza %i\n",strlen(tab1[2]));




int powieksz=2;
for(i=0;i<y;i++){
    tab1[i]=realloc(tab1[i],(powieksz+x)*sizeof(char));
}

counter =0;
powieksz =2;

 for(i=0;i<y;i++){
     for(j=x;j<x+powieksz;j++){
         tab1[i][j]='A'+counter;
         counter++;
     }
     tab1[i][x+powieksz]='\0';
     powieksz+=2;
     printf("\n");
 }

 counter =2;
 for(i=0;i<y;i++){
     for(j=0;j<x+counter;j++){
         printf("%c",tab1[i][j]);
     }
     counter+=2;
     printf("\n");
 }


 char *wsk;

 wsk= &*tab1[0];
 printf("\n\n%s\n",wsk);
 wsk= &tab1[1][0];
 printf("%s\n",wsk);
 wsk= *((tab1+2));
 printf("%s\n",wsk);


 for(i=0;i<y;i++)  { free(tab1[i]); }
 free(tab1);

}


przykład 1
int main()
{
 int i,j,k,x=3,y=5, counter =0;
 char tab[x][y];

 for (i=0;i<x;i++){
     for(j=0;j<y;j++){
         tab[i][j]='a'+counter;
         counter ++ ;
     }
 }
    printf("wyswietlanie1.\n");
    for(i=0;i<x;i++){
    for(j=0;j<y;j++){
        printf("%c",tab[i][j]);
    }
    printf("\n");
    }


    printf("wyswietlanie2.\n");
    for(i=0;i<x;i++){
    for(j=0;j<y;j++){
        printf("%c",*(tab[i]+j));
    }
    printf("\n");
    }


    printf("wyswietlanie3.\n");
    for(i=0;i<x;i++){
    for(j=0;j<y;j++){
        printf("%c",*(*tab+i)+j);
    }
    printf("\n");
    }


  printf("\n adresy \n");

  printf("wyswietlanie3.\n");
  for(i=0;i<x;i++){
  for(j=0;j<y;j++){
      printf("%p",(*(tab+i)+j));
  }
  printf("\n");
  }


  printf("\n adres wskaznika \n");

char *wsk;
wsk = &tab [1][2];

printf("wartosc wskaznika pokazujacego na adres tab [1][2] %c\n",*wsk);
printf("wartosc wskaznika rzesunietego o jeden %c\n",*(wsk+1));

printf("\n tab 3-wymiarowa\n");

counter=0;
int tab3d[3][3][3];

for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        for(k=0;k<3;k++){

            tab3d[i][j][k]=counter;
            counter++;
            printf(" %i ",tab3d[i][j][k]);
        }printf("\n");
    }  printf("\n\n");
}

    return 0;
}
*/
