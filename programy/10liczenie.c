#include <stdio.h>
#include <stdlib.h>

int tablice( int n, double *tab){

 int b=1;
 int j=1;
 tab_out[0] = tab_in[0];

 for(int i=0;i<n;i++){
     for(int k=0;k<j;k++){
         if(tab_out[k]==tab_in[i])
         {
             b=0;
             break;
         }
     }
             if(b)tab_out[j++]=tab_in[i];
               b=1;

 }
  return j;
}


int main()
{
   int tab1[]={1,1,3,4,5,6,7,8,9};
   int tab2[]={1,2,3,4,5,6,7,8,9};
   printf("%i",tablice(tab1,tab2,9));

    return 0;

}
