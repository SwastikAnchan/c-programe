/*c program to calculate simple intrest*/
#include<stdio.h>
int main()
{
float amount,rate,time,si;
printf("Enter principle(amount):");
scanf("%f",&amount);
printf("Enter rate:");
scanf("%f",&rate);
printf ("Enter time(in years):");
scanf("f",&time);
si=(amount*rate*time)/100;
printf("\n simple intrest is =%f",si);
return 0;
}
