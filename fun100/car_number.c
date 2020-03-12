#include<stdio.h>
void main()
{
    int i,j,k,temp;
    for(i=0;i<9;i++)
        for(j=0;j<9;j++)
        {
            if(i!=j)
            {
                k=1000*i+100*i+10*j+j;
                for(temp=31;temp<99;temp++)
                    if(temp*temp==k)
                        printf("the car number is %d",k);
            }
        }
}

