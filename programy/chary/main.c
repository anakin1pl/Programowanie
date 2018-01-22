#include <stdio.h>
#include <stdlib.h>


int main()
{

    char cyfra = '3';
    int liczba = cyfra -'0';

liczba *=2;
cyfra = liczba +'0';

printf("%c\n", cyfra);

    return 0;
}
