#include <stdio.h>


void *f1(int a){
    a*=2;
    return &a;
}

void *f2(int *b){
    *b*=3;
    return b;
}



int main()
{


}
