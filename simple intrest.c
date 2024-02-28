/*c program to calculate simple interest*/
#include<stdio.h>

int main()
{
float amount ,rate,time,si;

printf("enter principle (amount):");
scanf("%f",&amount);

printf("enter rate:");
scanf("%f,&rate");

printf("enter time(in years):");
scanf("%f",&time);

si=(amount*rate*time)/100;

printf("/n simple interest i8 = %f",si);
return 0;
}
