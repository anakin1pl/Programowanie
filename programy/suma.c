#include <stdio.h>
#include <stdlib.h>

void f (int i,int *w){

    *w=i;




}



int main(){

int a=7, b=2;

printf(" %i",f(&a,&b));

}
