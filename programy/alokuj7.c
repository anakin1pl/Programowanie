#include <stdio.h>
#include <stdlib.h>

int *alokuj7 (int n){

    return malloc(n* sizeof(int));
}

void zwolnij(int *tab) {free(tab);)


int main(){

int *tab1=alokuj7(5);
tab1[0]=5;
printf(" %i",tab1[0]);
zwolnij(tab1);
printf("%i",tab1[0])
}
