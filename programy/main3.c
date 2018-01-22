#include <stdio.h>
#include <stdlib.h>

int *f (int *a, int *b){
    int *c =malloc(sizeof (int));
    *c=(*a)*(*b);
    printf("\n adres w funkcji= %p", c);
    return c;

}




int main()
{
float a=3.0 , b=5.4;
int *d= f(&a,&b);
printf("\n wynik = %i", *d);
printf("\n adres w mainie %p\n",d);
free(d);
}
