#include <stdio.h>
void main()
{
int marks;
printf("enter your marks");
scanf("%d",&marks);
if(marks<0||marks>100)
{
printf("wrong entry");
}
else if(marks<50)
{
printf("grade f");
}
else if(marks>=50&&marks<60)
{
printf("grade d");
}
else if(marks>=60&&marks<70)
{
printf("grade c");
}
else if (marks>=70&&marks<80)
{
printf("grade b");
}
else if(marks>=80&&marks<90)
{
printf("grade a");
}
else
{
printf("grade a+");
}
}


