#include <stdio.h>
#include <string.h>

int main()
{
    int tab[] ={1,2,3,4,5};
    int kopia[5]={10,11,12,13,14};

    memcpy((int*)kopia, (int*)tab,3*sizeof(int));


   for(int i=0;i<5;i++) {
       printf("%i ",kopia[i]);}
   return 0;
}
