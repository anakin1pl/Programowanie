#include <stdio.h>


void *f1(int a){
    a*=2;
    return &a;
}


int main()
{

    int a =2;
    int *wsk = &a;
    printf("wartosc wskaznika: %d addres wskaznika: %p \n", *wsk,wsk);
    printf("adres zmiennej: %p, wartosc zmiennej: %d", &a,a);

    int b=5;
    int *wsk2=f2(&b);
    printf("wartosc wskaznika: %d addres wskaznika: %p \n", *wsk2,wsk2);
    printf("adres zmiennej: %p, wartosc zmiennej: %d", &b,b);
    printf("wartosc wskaznika wsk %i, wartosć wskaznika wsk2 %i",*wsk, *wsk2);

    return 0;
}
