#include <stdio.h>
void main()
{
int i,j,a,n,number[30];
printf("enter the vlu of n\n");
scanf("%",&n);
printf("enter the numbers \n");
for (i=0;i<n; ++i)
scanf("%d",&number[i]);
for(i=0; i<n;++i)
{
for(j=i+1;j<n; ++j)
{
if (number[i]>number[j])
{
a=number[i];
number[i]=number[j];
number[j]=a;
}
}
}
printf("the numbers arranged in ascending order an given below");
for(i=0;i<n;++i)
printf("%d\n",number[i]);
}
