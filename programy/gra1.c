/* generator random(), randomize() */
     #include <stdlib.h>
     #include <time.h>
     #include <stdio.h>

     int main()
     {
         int gr1, gr2, suma1, suma2;
         srand(time(NULL));


for(int i=0;i<6;i++){
    gr1=1+rand()%6;
    gr2=1+rand()%6;

printf("%i",gr1);
printf("%i",gr2);

suma1+=gr1;
suma2+=gr2;

printf("tura %i gr1 %i gr2%i", g);
}


if      (suma1<suma2) printf("wygral gracz2");

else if (suma1>suma2) printf("wygral gracz1");

else                  printf("remis");





return 0;
}
