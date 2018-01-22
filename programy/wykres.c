#include <stdio.h>
#include <math.h>


int main()
{

float a,b;
scanf("%f%f",&a,&b);

if  (a==0){

    if(b==0) printf("nie przechodzi przez zadna");
    else if(b>0) printf("przechodzi przez 1 i 2");
    else if(b<0) printf("przechodzi przez 3 i 4");
}


else if  (a>0){

    if(b==0) printf("przechodzi przez 1 i 3");
    else if(b>0) printf("przechodzi przez 1,2,3");
    else if(b<0) printf("przechodzi przez 1,3,4");
}

else if  (a<0){

    if(b==0) printf("przechodzi przez 2 i 4");
    else if(b>0) printf("przechodzi przez 1,2,4");
    else if(b<0) printf("przechodzi przez 2,3,4");


}

return 0;
}

