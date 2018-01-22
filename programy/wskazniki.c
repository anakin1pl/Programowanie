#include <stdio.h>
#include <stdlib.h>

int f1(int* a, int* b);
int* f2(int* a, int *b);
void f3(int *a, int *b);
void f4(int *a, int* b);
int f5(const int* a, const int* b);
void f6(int i, int* w);
unsigned int* f7(int n);
void f8(int* tab);
int f10(int* tab_in, int* tab_out,int n);
int* f11(int* tab_1, int* tab_2, int n_1, int n_2,int* n_3);
double* f4217(int n, double* tab);
int* f4218(int n, int* tab1, int* tab2);

void zwyklaZmienna(int l) { l=1;}
void wskwArgumencie(int* n) {*n=1;}
int main()
{

//    int i =3;
//    int* wsk = &i;
//    printf("Wartosc %i Adres: %p\n", i,&i);
//    printf("Adres: %p Wartosc: %i", wsk,*wsk);
//    *wsk = 4;
//    printf("%i",*wsk);
//    int j  =5;
//    int* wsk2 = &j;
//    printf("Wartosc wsk2: %i", *wsk2);
//    wsk2 = wsk;
//    printf("%i\n", *wsk2);
//    int liczba =3;
//    printf("%i\n", liczba);
//    zwyklaZmienna(liczba);
//    printf("%i\n", liczba);
//    wskwArgumencie(&liczba);
//    printf("%i\n", liczba);


      int tab[] = {1,2,3,4,5,1,2,3,4,5,6,7,8,9,10};
      int tab2[] = {10,20,30,40,50,60,70,80,90,100};
      printf("%i",f10(tab,tab2,10));
      //int* wsk = f4218(10,tab,tab2);
//    int n = 10;
//    double* wsk = f4217(10,tab);
      //for(int i = 0;i<10;i++) printf("%i\n",wsk[i]);
      //free(wsk);


}


int f1(int *a, int *b)
{
    return ((*a)>(*b)) ? *b : *a;
}

int* f2(int *a, int *b)
{
    return ((*a)>(*b)) ? b : a;
}

void f3(int *a, int *b)
{
    int temp = (*a);
    (*a) = (*b);
    (*b) = temp;
}

void f4(int *a, int *b)
{
    if((*a)>(*b))
    {
        f3(a,b);
    }
}

int f5(const int *a, const int *b)
{
    return ((*a) + (*b));
}

void f6(int i, int *w)
{
    (*w) = i;
}

unsigned int* f7(int n)
{
    return (unsigned int*)malloc(n*sizeof(unsigned int));
}

void f8(int *tab)
{
    free(tab);
}

int f10(int *tab_in, int *tab_out, int n)
{
    int b = 1;
    int j =1;
    tab_out[0] = tab_in[0];
    for(int i = 1;i<n;i++)
    {
        for(int k = 0;k<j;k++)
        {
            if(tab_out[k] == tab_in[i])
            {
                b = 0;
                break;
            }
        }
        if(b) tab_out[j++] = tab_in[i];
        b = 1;
    }
    return j;
}

int* f11(int *tab_1, int *tab_2, int n_1, int n_2, int *n_3)
{
    *n_3 = n_1+n_2;
    int* tab = malloc(*n_3*sizeof(int));
    for(int i =0;i<n_1;i++)
        tab[i] =tab_1[i];
    for(int i = 0;i<n_2;i++)
        tab[n_1+i] = tab_2[i];
    return tab;
}

double* f4217(int n, double *tab)
{
    double* wsk = malloc(n*sizeof(double));
    for(int i =0;i<n;i++)
        wsk[i] = tab[i];
    return wsk;
}

int* f4218(int n, int *tab1, int *tab2)
{
    int *tab3 = malloc(n*sizeof(int));
    for(int i =0;i<n;i++)
        tab3[i] = tab1[i] + tab2[i];
    return tab3;
}
