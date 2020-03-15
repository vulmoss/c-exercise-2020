#include<stdio.h>

int main()
{
    int i =0;
    double money = 0.0;
    for(i=0;i<5;i++)
        money = (money + 1000) / ( 1 + 12 * 0.0063);
    printf("money is %0.2f\n",money);
}
