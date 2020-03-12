#include<stdlib.h>
#include<stdio.h>

int main(int argc, char *argv[])
{
    int input = 0;
    if(argc != 2)
        return 1;

    input = atoi(argv[1]);
    double output;
    output = input * 1.8 + 32;
    printf("The F is %.1f\n",output);

    return 0;
}

