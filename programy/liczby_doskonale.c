#include <stdio.h>
#include <math.h>

int suma_dzielnikow(int a){
    int i,W=0;
    for(i=a/2;i>0;i--)
    {
      if(a%i==0) W=W+i;
    }
    return W;
}

int main()
{
    int n=0;

    for(int i=0;i<4;n++){
        if(n==suma_dzielnikow(9))
            i++;
        printf("%d",n);
    }

 return 0;
}
