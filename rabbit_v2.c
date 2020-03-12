#include<stdio.h>
void main()
{
    long fib1=1,fib2=1;
    int i;
    for(i=1;i<=15;i++)
    {
        printf("%12d%12d",fib1,fib2);
//        if(i%1==0)
            printf("\n");
        fib1=fib1+fib2;
        fib2=fib1+fib2;
    }
}

