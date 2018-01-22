#include <stdio.h>
#include <stdlib.h>

void f (int *a, int *b){

    int *c;
    *c=*b;
    *b=*a;
    *a=*b;



}



int main(){

int a=5, b=2;
f(&a,&b);
printf(" %i,%i",a,b);

}
