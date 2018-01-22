#include <stdio.h>



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
