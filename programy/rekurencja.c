#include <stdio.h>

int             ciag(int n);
int             ciag1(int n);
unsigned int    Fib(unsigned int n);
unsigned int    ciag2(unsigned int n);
unsigned int    ciag3(unsigned int n);
unsigned int    ciag4(unsigned int n, unsigned int m);
unsigned int    ciag5(unsigned int n, unsigned int m);
unsigned int    euklides(unsigned int n, unsigned int m);

int main()
{
    printf("\n%d",ciag(5));
    printf("\n%d",ciag1(5));
    printf("\n%d",Fib(1));
    printf("\n%d",ciag2(6));
    printf("\n%d",ciag3(5));
    printf("\n%d",ciag4(3,4));
    printf("\n%d",euklides(15,5));
    return 0;
}

int ciag (int n){

    if(n==0) return 1;

    else return 2*ciag (n-1)+5;}

int ciag1 (int n){

    if      (n==0) return 1;
    else if (n==1) return 1;

    else return ciag1(n-1)+2*ciag1(n-2)+3;}

unsigned int Fib (unsigned int n){

    if           (n==0) return 0;

    else if      (n==1) return 1;
    else if      (n==2) return 1;

    else return Fib(n-1)+Fib(n-2);
}

unsigned int ciag2 (unsigned int n){


    if         (n==0) return 0;
    else if    (n==1) return 1;


    else return ciag2(n-1)+n;
}

unsigned int ciag3 (unsigned int n){


    if         (n==0 || n==1 || n==2) return 1;

    else if    (n%3==0) return ciag3(n-1)+ciag3(n-2);
    else if    (n%3==1) return 5*ciag3(n-1)+4;
    else if    (n%3==2) return ciag3(n-1);

}

unsigned int ciag4 (unsigned int n, unsigned int m){




  if         (m==0) return n;
  else if    (n==0) return m;
  else if    (n>0 && m>0)       return ciag4(n-1,m)+ciag4(n,m-1)+ciag4(n-1,m-1);

}

unsigned int euklides (unsigned int n, unsigned int m){


  if    (m>0)     return euklides(m,n%m);

}
