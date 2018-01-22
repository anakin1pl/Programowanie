#include <stdio.h>
#include <math.h>


int main()
{

   int d,m,y,p=0, dzien=0;

   scanf("%i",&d);
   scanf("%i",&m);
   scanf("%i",&y);

   if (0<m && m<13 && 0<y && y<4000){

       if(y%400==0 || (y%4==0 && y%!100==0)) {p=1;}

       for(int i=1;i<m;i++){
           if(m==1||m==3||m==5||m==7||m==8||m==10||m==12) dzien=dzien+31;
           else if(m==2) dzien=dzien+28+p;
           else dzien=dzien+30;

                           }

}
if(m==1) dzien=d;
printf("dzien to:%d",dzien);
return 0;
}


