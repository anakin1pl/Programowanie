#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Trojkat{
    int a,b,c;
};

struct Punkt{
    int x,y,z;
};

struct Punkt10{
   int wym[10];
} p;

struct Punktn{
   int rozm;
   int *wym;
}pk1,pk2,pk3;

struct Zespolone{
    double re;
    double im;
}z3={1.0,2.0}, z4={3.0,4.0};


void wyswietl(struct Trojkat tz){ printf("a= %i, b=%i, c=%i",tz.a,tz.b,tz.c);}

void wyswietl1(struct Trojkat *tz){ printf("a= %i, b=%i, c=%i",tz->a,tz->b,tz->c);}

void wyswietlp(struct Punkt tz){ printf("a= %i, b=%i, c=%i",tz.x,tz.y,tz.z);}

void wyswietlp10(struct Punkt10 tab[],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<10;j++){
            printf ("%i",tab[i].wym[j]);
            printf("\t");
        }printf("\n");
    }

}

void wyswietlPunktn(struct Punktn tab[],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<tab[i].rozm;j++){
            printf (" %i ",tab[i].wym[j]);

        }printf("\n");
    }

}

int zad1(struct Trojkat tr){

int ob;
ob= tr.a+tr.b+tr.c;
return ob;
}

void zad2(struct Trojkat troj1, struct Trojkat *troj2 ){

    troj2->a=troj1.a;
    troj2->b=troj1.b;
    troj2->c=troj1.c;
}

int zad3(struct Punkt tab[], int roz){

    int odls, odl,i,j;
    odls=sqrt(pow(tab[1].x-tab[0].x,2)+pow(tab[1].y-tab[0].y,2)+pow(tab[1].z-tab[0].z,2));

for(i=0;i<roz-1;i++){
    for(j=i+1;j<roz-1;j++){
    odl=sqrt(pow(tab[i].x-tab[j].x,2)+pow(tab[i].y-tab[j].y,2)+pow(tab[i].z-tab[j].z,2));
    if(odls>odl && i!=j) odls=odl;
   }
}

    return odls;
}

void zad4(struct Punkt tab1[], struct Punkt tab2[],int roz){

    for(int i=0;i<roz;i++){
    tab2[i]=tab1[i];
    }
    printf("\n");
}

void zad6(struct Punkt10 tab1[], struct Punkt10 tab2[],int roz){

    for(int i=0;i<roz;i++){
    tab2[i]=tab1[i];
    }
}

double *dodaj(struct Zespolone *z1, struct Zespolone *z2){

    struct Zespolone *suma;
    suma=malloc(sizeof(struct Zespolone));
    double sumaRe=z1->re+z2->re;
    double sumaIm=z1->im+z2->im;

    suma->im=sumaIm;
    suma->re=sumaRe;
    return suma;


}

int main()
{
struct Trojkat trojkat;
struct Trojkat *tz2;
tz2=malloc(sizeof(struct Trojkat));
trojkat.a=6;
trojkat.b=5;
trojkat.c=3;
printf("\n");
//wyswietl(trojkat);
//printf("%i",zad1(trojkat));
//zad2(trojkat,tz2);
//wyswietl1(tz2);
//free(tz2);
//printf("%i",zad3(tab1,4));

struct Punkt p1;
p1.x=0;
p1.y=0;
p1.z=10;
struct Punkt p2;
p2.x=0;
p2.y=0;
p2.z=20;
struct Punkt p3;
p3.x=0;
p3.y=0;
p3.z=2;
struct Punkt p4;
p4.x=0;
p4.y=0;
p4.z=11;

struct Punkt tab1[4]={p1,p2,p3,p4};
struct Punkt tab2[4];

zad4(tab1,tab2,4);
/*for(int i=0;i<4;i++){
    wyswietlp(tab1[i]);
    printf("\n");
}
printf("\n");
for(int i=0;i<4;i++){
    wyswietlp(tab2[i]);
    printf("\n");
}*/

for(int i=0;i<10;i++){ p.wym[i]=i;}
struct Punkt10 tab3[10];
for(int i=0;i<10;i++){ tab3[i]=p;}
struct Punkt10 tab4[10];

zad6(tab3,tab4,10);

//wyswietlp10(tab4,10);
printf("\n\n");

pk1.rozm=10;
pk1.wym=malloc(pk1.rozm*sizeof(int));
for(int i=0;i<10;i++) {pk1.wym[i]=i;}

pk2.rozm=8;
pk2.wym=malloc(pk2.rozm*sizeof(int));
for(int i=0;i<8;i++) {pk2.wym[i]=i*2;}

pk3.rozm=7;
pk3.wym=malloc(pk3.rozm*sizeof(int));
for(int i=0;i<7;i++) {pk3.wym[i]=(i+1)*3;}

struct Punktn tabdo8[10];
for(int i=0;i<10;i++){
    if(i%3==0) tabdo8[i]=pk1;
    else if(i%3==1) tabdo8[i]=pk2;
    else if(i%3==2) tabdo8[i]=pk3;
    }
wyswietlPunktn(tabdo8,10);

free(pk1.wym);
free(pk2.wym);
free(pk3.wym);

printf("\n\n");

struct Zespolone *z1;
struct Zespolone *z2;
z1=malloc(sizeof(struct Zespolone));
z2=malloc(sizeof(struct Zespolone));

z1->im=2;
z1->re=5;

z2->im=12;
z2->re=15;




return 0;
}
