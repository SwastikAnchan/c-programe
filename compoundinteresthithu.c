#include<stdio.h>
#include<math.h>

void main()
{
float p,r,t,ci;
printf("enter principle,rate&time:");
scanf("%f%f%f",&p,&r,&t);
ci=p*pow((1+r/100),t);
printf("bank loans compount interest=%f",ci);
}
