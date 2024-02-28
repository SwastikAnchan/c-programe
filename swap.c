#include <stdio.h>
int main()
{
int x,y;
printf("enter the value of x&y?");
scanf("%d%d",&x,&y);
printf("before swapping numbers:%d%d\n",x,y);
/*swapping*/
x=x+y;
y=x-y;
x=x-y;
printf("after swapping:%d%d",x,y);
return 0;
}
