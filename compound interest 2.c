include<stdio.h>
int main()
{
    float principle,rate,time;
    float ci;
    
    printf("Enter principle value:");
    scanf("%f",principle);
    
    printf("Enter rate value:");
    scanf("%f",rate);
    
    printf("Enter time value:");
    scanf("%f",time);
    
    ci=principle*(((1+rate/100),time)-1);
    
    printf("compound interest is %.2f",ci);
    return 0;
}