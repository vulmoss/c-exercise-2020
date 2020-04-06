#include<stdio.h>

void main(){
    long fib1=1,fib2=1,fib;
    int i;
    printf("%12d %12d\n",fib1,fib2);
    for(i=3;i<=30;i++)
    {
        fib=fib1+fib2;
        printf("%12d",fib);
        if(i%2==0)
            printf("\n");
        fib1=fib2;
        fib2=fib;
    }
}

