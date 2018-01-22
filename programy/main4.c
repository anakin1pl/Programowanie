#include <stdio.h>
#include <stdlib.h>

int *f (float *a, float *b){
    int *c =malloc(sizeof (int));
    *c=(*a)*(*b);
    printf("\n adres w funkcji= %p", c);
    return c;

}




int main()
{
    int a=5;

int *w1;
int *w2;
int *w3;

w1=&a;
w2=&a;
w3=w2;

printf("%i, %i, %i\n",*w1,*w2,*w3);
*w1*=8;
printf("%i, %i, %i\n",*w1,*w2,*w3);
}
