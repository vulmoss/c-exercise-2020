#include<stdlib.h>
#include<stdio.h>

int main(int argc, char *argv[])
{
    int input = 0;
    if(argc != 2)
        return 1;

    input = atoi(argv[1]);

    return 0;
}

