#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the three numbers:");
scanf("%d%d%d",&a,&b,&c);
if(a>=b&&a>=c)
printf("%dis the largest number.",a);
else if(b>=a&&b>=c)
printf("%d is the largest number.",b);
else
printf("%dis the largest number.",c);
return 0;
}
