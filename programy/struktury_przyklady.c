#include <stdio.h>
#include <stdlib.h>

struct TypZlozony {

    int a;
    float b;
    char c;

};

void wyswietl(struct TypZlozony tz){ printf("a= %i, b=%f, c=%c",tz.a,tz.b,tz.c);}




int main()
{
struct TypZlozony tz;
tz.a =1;
tz.b=2.3;
tz.c='a';
wyswietl(tz);
printf("\n");

struct TypZlozony *tz2;
tz2=malloc(sizeof(struct TypZlozony));
tz2->a=2;
tz2->b=3.3;
tz2->c='b';
wyswietl(*tz2);
free(tz2);
printf("\n");




    return 0;
}
