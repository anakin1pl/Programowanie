#include <stdio.h>
#include <math.h>


int main()
{

   int a1,a2,b1,b2,c;
   scanf("%d %d %d %d",&a1,&a2,&b1,&b2);

   if(a1>a2){
       c=a1;
       a1=a2;
       a2=c;
   }
   if(b1>b2){
       c=b1;
       b1=b2;
       b2=c;
   }
   c=a1;
   while(c>a1 && c>b1 && c<a2 && c<b2){

       printf("%i",c);
       c++;
   }

return 0;
}

