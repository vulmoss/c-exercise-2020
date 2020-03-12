#include<stdio.h>

int main()
{
    int cock,hen,chicken=0;
    for(cock=0;cock<=20;cock++)
        for(hen=0;hen<=33;hen++)
        {
            chicken=100 - cock-hen;
            if(cock*5 + hen*3 + chicken/3.0 == 100)
                printf("cock is %2d,hen is %2d, chicken is %2d\n",cock,hen,chicken);
        }
}

