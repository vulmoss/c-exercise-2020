#include<stdio.h>

int main(){
    double unit_price = 3.5;
    double discount1 = 0.05;
    double discount2 = 0.1;
    double discount3 = 0.2;
    double total_price = 0.0;
    int p = 0;

    printf("Enter the count you buy:");
    scanf("%d",&p);

    total_price=unit_price*p*(1.0 -
      (p>50?discount3:(
        p>20?discount2:(
          p>10?discount1:0.0))));
    printf("The price for %d is %7.2f\n",p,total_price);
    return 0;
}

