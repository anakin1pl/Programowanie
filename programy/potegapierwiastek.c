#include <stdio.h>
#include <math.h>

float potega(float p,unsigned int w);

int main()
{
int n,s;
scanf("%i %i",&n,&s);

for(int i=0; i<n;i++){
    if      (potega(i,s)==n) { printf("%d",i); break;}
    else if (potega(i,s)>n)  { printf("%d",i-1); break;}
}

//printf("%f",potega(2,5));
return 0;
}



float potega(float p, unsigned int w){

  int wynik=1;

for(int i=0;i<w;i++)
    wynik*=p;

return wynik;

}
