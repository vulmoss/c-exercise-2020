#include<stdio.h>

int main()
{
    double number1 = 0.0;
    double number2 = 0.0;
    char operation = 0;

    printf("\nEnter the calculation\n");
    scanf("%lf%c%lf",&number1,&operation,&number2);

    switch(operation)
    {
        case '+':
            printf("=%lf\n",number1 + number2);
            break;
        case '-':
            printf("=%lf\n",number1 - number2);
            break;
    }
    return 0;




}

