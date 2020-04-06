#include<stdio.h>

int main()
{
    int i,j,buf=0;
    int n;
    int a[] = {12,34,56,78,43,45};
    n = sizeof(a) / sizeof(a[0]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if (a[j] > a[j + 1])
            {
                buf = a[j];
                a[j] = a[j+1];
                a[j+1] = buf;
            }
    }
    }
    for(i=0;i<n-1;++i)
    {
        printf("%d\x20",a[i]);
    }
    printf("\n");
}


