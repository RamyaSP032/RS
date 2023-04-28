#include<stdio.h>
#include<conio.h>
main()
{
int sub1,sub2,sub3,sub4,sub5,sub6,sub7,total;
float avg;
clrscr();
printf("enter the seven subject marks=");
scanf("%d%d%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5,&sub6,&sub7);
total=sub1+sub2+sub3+sub3+sub4+sub5+sub6+sub7;
avg=total/7.0;
printf("total=%d",total);
printf("avg=%f",avg);
if(sub1>=35)
{
printf("\npass");
}
else
{
printf("\nfail");
}
if(sub2>=35)
{
printf("\npass");
}
else
{
printf("\nfail");
}
if(sub3>=35)
{
printf("\npass");
}
else
{
printf("\nfail");
}
if(sub4>=35)
{
printf("\npass");
}
else
{
printf("\nfail");
}
if(sub5>=35)
{
printf("\npass");
}
else
{
printf("\nfail");
}
if(sub6>=35)
{
printf("\npass");
}
else
{
printf("\nfail");
}
if(sub7>=35)
{
printf("\npass");
}
else
{
printf("\nfail");
}























