#include<stdio.h>
#include<conio.h>
int factofnum(int);
int main()
{
int num;
clrscr();
printf("enter a number:");
scanf("%d",&num);
printf("the factorial of %d:%d",num,factofnum(num));
getch();
return 0;
}
int factofnum(num)
{
int fact=1;
while(num!=0)
{
fact=fact*num;
num--;
}
num=fact;
return(num);
}