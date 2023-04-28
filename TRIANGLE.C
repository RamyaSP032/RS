#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,i,j,n;
clrscr();
printf("enter the number of rows:");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
for(j=0;j<i;j++)
{
printf("*");
}
printf("\n");
}
for(i=n;i>=0;i--)
{
for(j=0;j<i;j++)
{
printf("*");
}
printf("\n");
}
getch();
}