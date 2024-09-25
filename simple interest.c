#include<stdio.h>



int main()
{
    float principle,rate,time;
    float si;

    printf("Enter the principle amount\n");
    scanf("%f",principle);

    printf("Enter the rate\n");
    scanf("%f",rate);

    printf("Enter time in years\n");
    scanf("%f",time);

    si=(principle*rate*time)/100;

    printf("si=%f",si);
    return 0;
}